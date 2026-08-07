# Fontmatrix Fork Qt5

Fork de `fontmatrix` orientado a mantener el proyecto compilando con Qt5 y extenderlo para funcionar como visor de colecciones de fuentes tipograficas, no solo como visor de las fuentes instaladas en el sistema.

Este fork ya compila en Linux y ya incorpora un modo de coleccion por carpeta.

## Estado actual

- Compila con `cmake` y Qt5.
- Mantiene la visualizacion tradicional de fuentes del sistema.
- Permite abrir una carpeta como coleccion de fuentes.
- Permite volver al catalogo completo con `File > Show All Fonts`.
- Tiene una accion explicita `File > Close Collection` (atajo **Ctrl+W**).
- Recuerda la ultima coleccion abierta.
- Permite recargar la coleccion actual.
- Muestra la ruta completa de la coleccion activa en la barra de estado.
- Guarda colecciones recientes en `File > Recent Collections`.
- Ofrece `File > Quick Collections` con acceso directo a:
  - `~/.fonts` (si existe)
  - `~/.local/share/fonts` (si existe)
  - Carpetas habituales detectadas automaticamente como `album-fuentes/fuentes-extraidas`, `~/Fonts`, `~/fuentes` y similares.
- Indicadores visuales del modo coleccion:
  - El titulo de la ventana muestra el nombre de la coleccion activa.
  - La etiqueta de catalogo en la barra de estado aparece con un color resaltado.
- Evita mezclar en modo coleccion fuentes antiguas que esten fuera de la carpeta activa.
- La capa de base de datos expone tanto `AllFontNames()` (catalogo global) como `VisibleFontNames()` (subconjunto filtrado por coleccion).

El detalle funcional y las tareas pendientes estan en [ROADMAP.md](./ROADMAP.md).

## Dependencias necesarias

Estas son las dependencias necesarias para la compilacion base verificada en este fork sobre Debian/Ubuntu y derivados:

```bash
sudo apt update
sudo apt install -y \
  build-essential \
  cmake \
  pkg-config \
  qtbase5-dev \
  qttools5-dev \
  qttools5-dev-tools \
  libqt5svg5-dev \
  libqt5webkit5-dev \
  libqt5sql5-sqlite \
  libfreetype6-dev \
  libfontconfig1-dev
```

Notas:

- `Qt5WebKitWidgets` es obligatorio con el codigo actual.
- `libqt5sql5-sqlite` es importante para que funcione la base de datos SQLite usada por Fontmatrix.
- `harfbuzz` y `hyphenate` no necesitan instalarse aparte para la compilacion base, porque en este arbol ya vienen integrados en el proyecto.

## Dependencias opcionales

Estas no son necesarias para la compilacion base que ya fue verificada, pero el `CMakeLists.txt` conserva soporte opcional para ellas:

- `PythonLibs` si se activa `-DWANT_PYTHONQT=true`
- `ICU` si se activa `-DWANT_ICU=true`
- `M17N` si se activa `-DWANT_M17N=true`
- `PoDoFo` si se activa `-DWANT_PODOFO=true`

En este fork no se ha dejado documentada una compilacion validada reciente para esas opciones opcionales, por lo que conviene activarlas solo si se van a trabajar especificamente.

## Compilacion

Compilacion minima verificada:

```bash
cmake -S . -B build
cmake --build build -j4
```

El binario queda en:

```bash
build/src/fontmatrix
```

Si se quiere instalar localmente:

```bash
sudo cmake --install build
```

Por defecto el prefijo actual del proyecto es `/usr/local`.

## Ejecucion

Desde el arbol de compilacion:

```bash
./build/src/fontmatrix
```

## Flujo de trabajo recomendado

1. Instalar dependencias.
2. Configurar con `cmake -S . -B build`.
3. Compilar con `cmake --build build -j4`.
4. Probar manualmente el flujo de sistema y el flujo de coleccion.
5. Revisar [ROADMAP.md](./ROADMAP.md) antes de continuar nuevas mejoras.

## Flujo manual que debe probarse

Cada vez que se hagan cambios en el modo coleccion, conviene probar como minimo esto:

1. Abrir Fontmatrix mostrando las fuentes del sistema.
2. Ir a `File > Open Font Collection...`.
3. Elegir una carpeta con `.ttf`, `.otf` o `.pfb`.
4. Verificar que solo aparezcan fuentes de esa carpeta.
5. Verificar que el titulo de la ventana y la etiqueta de catalogo de la barra de estado muestran la coleccion activa.
6. Verificar que `File > Close Collection` (o **Ctrl+W**) vuelve al catalogo global.
7. Verificar que `File > Reload Current Collection` sigue funcionando.
8. Verificar que `File > Recent Collections` reabre correctamente la carpeta.
9. Verificar que `File > Show All Fonts` vuelve al catalogo global.
10. Verificar que `File > Quick Collections` muestra entradas disponibles como `~/.fonts` o `~/.local/share/fonts` cuando esas carpetas existen.
11. Cerrar y abrir la aplicacion para comprobar que restaura la ultima coleccion.

## Archivos clave para continuar el desarrollo

- `CMakeLists.txt`: configuracion principal del proyecto.
- `src/CMakeLists.txt`: fuentes, UI, MOC y enlace del ejecutable.
- `src/typotek.cpp` y `src/typotek.h`: ventana principal, acciones de menu y estado general del modo coleccion.
- `src/fmfontdb.cpp` y `src/fmfontdb.h`: base de datos interna y filtrado de fuentes visibles.
- `src/mainviewwidget.cpp` y `src/mainviewwidget.h`: refresco de la vista principal y seleccion de fuentes.
- `ROADMAP.md`: estado real del fork y siguientes pasos.

## Cambios ya introducidos en este fork

Los cambios importantes hechos durante esta etapa se concentran en:

- `src/typotek.cpp`
- `src/typotek.h`
- `src/fmfontdb.cpp`
- `src/fmfontdb.h`
- `src/mainviewwidget.cpp`
- `src/mainviewwidget.h`

En resumen, aqui se implemento el soporte para:

- abrir carpetas como colecciones,
- alternar entre coleccion y catalogo global,
- cerrar coleccion de forma explicita via `File > Close Collection` (**Ctrl+W**),
- recordar la ultima coleccion,
- recargar colecciones,
- mostrar la ruta activa en la barra de estado,
- manejar colecciones recientes via `File > Recent Collections`,
- abrir carpetas habituales con un solo clic via `File > Quick Collections` (incluye `~/.fonts`, `~/.local/share/fonts` y carpetas de usuario detectadas automaticamente),
- indicadores visuales del modo coleccion (titulo de ventana y etiqueta resaltada en barra de estado),
- restringir correctamente el subconjunto visible de fuentes,
- y exponer APIs globales (`AllFontNames()`) y filtradas por coleccion (`VisibleFontNames()`) en la capa de base de datos.

## Cosas a tener en cuenta

- El proyecto todavia arrastra bastantes advertencias de compilacion heredadas del codigo historico y de APIs antiguas de Qt.
- Que compile no significa que todas las funciones historicas del programa esten ya revisadas bajo el nuevo modo coleccion.
- Si se tocan filtros, familias, exportacion o recarga de fuentes, hay que comprobar que no se use accidentalmente el catalogo global donde deberia usarse el visible.
- El proyecto todavia conserva archivos heredados como `README` e `INSTALL` del proyecto original; este `README.md` describe el estado practico de este fork.

## Proximas mejoras sugeridas

Las siguientes mejoras prioritarias estan pendientes en el momento de escribir este archivo:

- permitir abrir varias colecciones a la vez y alternar entre ellas,
- añadir un dialogo o banner explicando que el filtro actual es por carpeta,
- añadir una opcion para abrir una coleccion de forma no recursiva,
- añadir una opcion para abrir solo ciertos formatos (`.ttf`, `.otf`, `.pfb`) dentro de una coleccion,
- revisar operaciones secundarias que aun puedan depender del catalogo global (recarga de fuentes, exportacion de font book),
- documentar pruebas manuales mas completas,
- y, si el proyecto madura mas, introducir pruebas automatizadas.
