# ROADMAP

## Estado actual

- [x] Compilar el fork `fontmatrix` en la rama `qt5`.
- [x] Mantener la visualización tradicional de fuentes del sistema operativo.
- [x] Añadir una acción para abrir una carpeta como colección de fuentes.
- [x] Añadir una acción para volver al catálogo completo de fuentes.
- [x] Restringir la lista visible de fuentes al contenido de la carpeta elegida.
- [x] Hacer que la vista principal refleje el cambio entre catálogo completo y colección.
- [x] Hacer que las familias mostradas respeten el subconjunto visible.
- [x] Hacer que las búsquedas y filtros trabajen sobre el subconjunto visible y no sobre todo el sistema.
- [x] Mostrar en la barra de estado el contexto del catálogo activo.
- [x] Verificar que los cambios compilan correctamente con `cmake --build build -j4`.

## Modo colección

- [x] `File > Open Font Collection...`
- [x] `File > Show All Fonts`
- [x] Cargar fuentes de una carpeta sin perder el soporte para fuentes del sistema.
- [x] Reutilizar la base de datos interna de `FontItem` para evitar reescribir el visor completo.
- [x] Aplicar el modo colección de forma central en `FMFontDb`.

## Trabajo ya hecho en código

- [x] `src/typotek.cpp`: acciones de menú para abrir colección y volver al catálogo completo.
- [x] `src/typotek.h`: estado y métodos para gestionar el modo colección.
- [x] `src/fmfontdb.cpp`: filtrado por raíces visibles para el catálogo activo.
- [x] `src/fmfontdb.h`: API para activar o limpiar raíces visibles.
- [x] `src/mainviewwidget.cpp`: refresco de la vista principal al cambiar de catálogo.
- [x] `src/mainviewwidget.h`: punto de entrada para refrescar la vista.

## Siguientes mejoras recomendadas

- [x] Recordar la última colección abierta y restaurarla al reiniciar.
- [x] Añadir una acción `Reload Current Collection`.
- [x] Mostrar la ruta completa de la colección activa, no sólo el nombre de carpeta.
- [x] Permitir abrir directamente carpetas como `album-fuentes/fuentes-extraidas` o `album-fuentes-espanol/fuentes-extraidas` o cualquier carpeta donde el usuario tenga una colección de fuentes tipográficas (mediante menú Quick Collections)
- [x]  Permitir abrir directamente si están presentes las carpetas de las fuentes `~/.fonts`o `~/.local/share/fonts/` (mediante menú Quick Collections)
- [x] Añadir un menú con las colecciones abiertas recientemente.
- [x] Evitar que al abrir una colección se mezclen fuentes importadas antiguas que estén fuera del directorio activo.
- [x] Añadir una forma explícita de “cerrar colección” además de `Show All Fonts`.
- [ ] Permitir abrir varias colecciones y alternar entre ellas.
- [ ] Permitir comparar dos colecciones entre sí (si es que esto fuera posible)

## Mejoras de UX

- [x] Mostrar un indicador más claro en la ventana principal cuando se está en modo colección. (Título de ventana + estilo resaltado en la barra de estado)
- [ ] Añadir un diálogo o banner explicando que el filtro actual es por carpeta.
- [ ] Añadir una opción para abrir colección sin importar fuentes nuevas, si ya fueron indexadas antes.
- [ ] Añadir una opción para abrir una colección de forma no recursiva.
- [ ] Añadir una opción para abrir sólo ciertos formatos (`.ttf`, `.otf`, `.pfb`) dentro de una colección.
- [ ] Mostrar si está disponible la ruta 

## Mejoras técnicas

- [x] Revisar si `AllFontNames()` también debe respetar el subconjunto visible en todos los casos. (Conclusión: No, ya que se usa para operaciones globales de BD. Añadida `VisibleFontNames()` para casos que sí necesiten filtrado)
- [ ] Revisar si algunas operaciones secundarias siguen usando el catálogo global donde deberían usar el visible.
- [ ] Añadir pruebas manuales documentadas para el flujo de colección.
- [ ] Añadir pruebas automatizadas si el proyecto llega a tener infraestructura para ello.
- [ ] Revisar el comportamiento al recargar fuentes (`slotReloadFiltered`, `slotReloadSingle`) estando en modo colección.
- [ ] Revisar el comportamiento de exportación de font book en modo colección.

## Posibles extensiones grandes

- [ ] Permitir filtrar dentro de una colección sólo las fuentes con soporte completo para español (si es que esto fuera posible)
