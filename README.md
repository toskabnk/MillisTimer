# MillisTimer

Libreria para el uso simplificado de los timers con la funcion millis();

Las funciones principales son:
- MillisTimer: Constructor de la libreria. Puedes dejarlo vacio y establecer el intervalo luego o pasarle uno por parametro desde el inicio.
- checkTimer: Boolean. Devuelve true y reinicia el contador si ha pasado el tiempo establecido.
- setInterval: Void. Para establecer un nuevo intervalo.
- serTimer: Void. Actualiza el contador. Es el analogo al previousMillis = 0, pero en vez de 0 a millis().

Licencia GNU GPLv3.