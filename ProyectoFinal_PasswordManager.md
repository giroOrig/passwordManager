# passwordManager

1	Introducción

	Este documento es una Especificación de Requisitos Software (ERS) para el Sistema de información para la gestión de procesos y control de inventarios. Esta especificación se ha estructurado basándose en las directrices dadas por el estándar IEEE Práctica Recomendada para Especificaciones de Requisitos Software ANSI/IEEE 830, 1998.

1.1	Propósito

	El presente documento tiene como propósito definir las especificaciones funcionales, no funcionales para el desarrollo de un sistema de información web que permitirá gestionar el proceso de almacenamiento de usuarios, password y sitios web.

1.2	Alcance

Esta especificación de requisitos está dirigida al usuario del sistema.

1.3	Personal involucrado

Nombre	Emanuel Girolami
Rol	Analista, diseñador y programador
Categoría Profesional	TSU-Informática
Responsabilidad	Análisis de información, diseño y programación del SIS-I
Información de contacto	Emnlgirolami@gmail.com


2	Descripción general

2.1	Perspectiva del producto
El sistema será un producto para trabajar en entorno de un celular con android o computadora con Windows.

2.2	Características de los usuarios
Tipo de usuario	Usuario final
Formación	-
Actividades	AB de usersname, password y sitio/app.

3	Requisitos específicos


Requerimientos Funcionales

Identificación del requerimiento: 	RF01
Nombre del Requerimiento: 	Cargar información
Características: 	El sistema ofrecerá al usuario la posibilidad de cargar usuario, password y sitio/app al que corresponde.
Descripción del requerimiento: 	Cargar datos de usuario, password y sitio/app para que queden guardados.
Requerimiento NO funcional: 	•	RNF01
•	RNF02
Prioridad del requerimiento:     
Alta



Identificación del requerimiento: 	RF02
Nombre del Requerimiento: 	Consultar Información.
Características: 	El sistema ofrecerá al usuario información general acerca de los usuarios y password guardados.
Descripción del requerimiento: 	Muestra información sobre los usuarios y contraseñas guardados previamente.
Requerimiento NO funcional: 	•	RNF01
•	RNF02
Prioridad del requerimiento:     
Alta


Identificación del requerimiento: 	RF03
Nombre del Requerimiento: 	Borrar.
Características: 	El sistema permitirá al usuario borrar los datos de usuario y password.
Descripción del requerimiento: 	Permite al usuario modificar datos de los usuarios y password.
Requerimiento NO funcional: 	•	RNF01
•	RNF02
•	RNF05
Prioridad del requerimiento:     
Alta


Requerimientos No Funcionales.

Identificación del requerimiento: 	RNF01
Nombre del Requerimiento: 	Interfaz del sistema.
Características: 	El sistema presentara una interfaz de usuario sencilla para que sea de fácil manejo a los usuarios del sistema.
Descripción del requerimiento: 	El sistema debe tener una interfaz de uso intuitiva y sencilla.

Prioridad del requerimiento:     
Alta	




Identificación del requerimiento: 	RNF02
Nombre del Requerimiento: 	Desempeño
Características: 	El sistema garantizara a los usuarios un desempeño en cuanto a los datos almacenado en el sistema ofreciéndole una confiabilidad a esta misma.
Descripción del requerimiento: 	Garantizar el desempeño del sistema informático a los diferentes usuarios. En este sentido la información almacenada o registros realizados podrán ser consultados y actualizados permanente y simultáneamente, sin que se afecte el tiempo de respuesta.
Prioridad del requerimiento:     
Alta	



Identificación del requerimiento: 	RNF03
Nombre del Requerimiento: 	Seguridad en información
Características: 	El sistema garantizara a los usuarios una seguridad en cuanto a la información que se procede en el sistema. 
Descripción del requerimiento: 	Garantizar la seguridad del sistema con respecto a la información y datos que se manejan tales sean documentos, archivos y contraseñas.
Prioridad del requerimiento:     
Alta	

.
3.1	Requisitos funcionales

3.1.1	Requisito funcional 1

•	Dar de alta un username + password + site: El sistema permitirá al usuario, agregar datos de username, password y sitio/app.
3.1.2	Requisito funcional 2
•	Consultar información: El sistema permitirá al usuario consultar los datos guardados.
3.1.3	Requisito funcional 3
•	Borrar información: El sistema permitirá al usuario borrar información.


3.2	Requisitos no funcionales
3.2.1	Requisitos de rendimiento

•	Garantizar que el diseño de las consultas u otro proceso no afecte el desempeño de la base de datos, ni considerablemente el tráfico de la red.
3.2.2	Seguridad

•	Garantizar la confiabilidad, la seguridad y el desempeño del sistema informático a los diferentes usuarios. En este sentido la información almacenada o registros realizados podrán ser consultados y actualizados permanente y simultáneamente, sin que se afecte el tiempo de respuesta.
•	Garantizar la seguridad del sistema con respecto a la información y datos que se manejan tales sean documentos, archivos y contraseñas.
•	Facilidades y controles para permitir el acceso a la información al personal autorizado a través de Internet,  con la intención de consultar y subir información pertinente para cada una de ellas.
3.2.3	Fiabilidad

•	El sistema debe tener una interfaz de uso intuitiva y sencilla
•	La interfaz de usuario debe ajustarse a las características de la web de la institución, dentro de la cual estará incorporado el sistema de gestión de procesos y el inventario

3.2.4	Disponibilidad

•	La disponibilidad del sistema debe ser continua con un nivel de servicio para los usuarios de 7 días por 24 horas, garantizando un esquema adecuado que permita la posible falla en cualquiera de sus componentes,  contar con una contingencia, generación de alarmas.

3.2.5	Mantenibilidad

•	El sistema debe disponer de una documentación fácilmente actualizable que permita realizar operaciones de mantenimiento con el menor esfuerzo posible

•	La interfaz debe estar complementada con un buen sistema de ayuda (la administración puede recaer en personal con poca experiencia en el uso de aplicaciones informáticas).

3.2.6	Portabilidad

•	El sistema será implantado bajo la plataforma de Windows.

