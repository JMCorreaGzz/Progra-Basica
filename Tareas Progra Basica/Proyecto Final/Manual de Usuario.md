# Universidad Autónoma de Nuevo León
-----------------------------------
## Facultad de Ciencias Fisico-Matemáticas
-----------------------------------------
### MANUAL DE USUARIO.

José Miguel Correa González
===========================
# Introducción
--------------
Esta es una agenda digital académica que tiene la funcíon de almacenar alumnos
con sus respectivos datos personales.
Su _objetivo_ es cumplir con las opciones correspondientes a una agenda digital,
además de proporcionar el cálculo y almacenamiento de calificaciones de los
correspondientes alumnos registrados.
----
# Índice:
1. Menú de opciones.
2. Posibles errores.
----
## 1. Menú
__Menu__:
Estas son las acciones que podrás realizar:

*__Agregar Contacto__: Podrás proceder a dar de alta estos campos
  - Nombre(s).
  - Apellido(s)
  - Correo Electrónico
  - Teléfono
  - Matrícula
  - Dirección

*__Borrar Contacto__: En esta opción, se podrá eliminar algún contacto
previamente registrado, lo buscará por su matrícula de identificación.

*__Buscar contacto__: Aquí se buscará la matrícula del alumno deseado
a su vez, se podrán efecutar las siguientes opciones:
  - Entrar a la opción de borrar contacto
  - Editar la información de algún alumno registrado
  - Editar sus calificaciones

*__Mostrar todos__: También tendrá la opción de verificar la información de
los alumnos registrados hasta el momento, incluyendo cálculo de calificaciones

*__Agregar calificaciones__: En esta función aparte se podra registrar las
calificaciones de todos los alumnos que se tienen registrados en ese momento,
para su mayor comodidad.

*__Salir__: Podrá salir del programa, una opción que desplegará al salir, es
si usted desea de remover el archivo de texto, que se crea con la información
registrada, en ese mismo momento.
----
## 2. Posibles errores.
-__Correo Electrónico__: Se deberá de introducir un "@" y un ".com", del caso
contrario se seguirá repitiendo la captura de este dato hásta que lo ingrese 
correctamente.

-__Teléfono__: El número de teléfono no debe ser menor a 8 dígitos ni mayor a
12 dígitos, a su vez, cualquier carácter diferente a un número haría que se
ciclara esta captura hasta tener del dato correcto.

-__Matrícula__: La matrícula se cuida de que sea única, en caso de lo contrario
se repitiría la adición de este dato

-__Calificaciones__: Por sentido común, las calificaciones también estan validadas
para evitar la captura de calificaciones negativas o superiores a la nota alta.
Otra adición que contiene, si por alguna razón se ingresa un cero en cualquiera
de las 3 calificaciones, el promedio será arrojado como cero.