El método de Newton-Raphson, permite hallar una raíz de una ecuación no-lineal siempre y cuando se parta de una buena estimación inicial de la misma.
El esquema iterativo de Newton puede derivarse del desarrollo de Taylor de la función alrededor de la estimación inicial. 

http://www3.fi.mdp.edu.ar/analisis/temas/no_lineales_1/images/fo_newton1.gif 

La recta tangente a la función, que pasa por el punto [x0 , f(x0)], se encuentra definida por la siguiente expresión:

http://www3.fi.mdp.edu.ar/analisis/temas/no_lineales_1/images/fo_newton2.gif 

Si denominamos x1 a la intersección de g(x) con el eje x (es decir, la raíz de g(x)), resolviendo dicha ecuación obtenemos, la siguiente expresión:

http://www3.fi.mdp.edu.ar/analisis/temas/no_lineales_1/images/fo_newton3.gif 

Generalizando este esquema de aproximaciones sucesivas a la raíz, obtenemos:

http://www3.fi.mdp.edu.ar/analisis/temas/no_lineales_1/images/fo_newton4.gif

Para que el método de Newton-Raphson converja deben cumplirse ciertas condiciones de convergencia. En la siguiente figura podemos apreciar, como aún partiendo de un punto cercano a la raíz buscada, en uncaso el método converge y en otro caso no.

http://www3.fi.mdp.edu.ar/analisis/temas/no_lineales_1/images/gr_newton1.gif - http://www3.fi.mdp.edu.ar/analisis/temas/no_lineales_1/images/gr_newton2.gif

EJEMPLO:

http://www3.fi.mdp.edu.ar/analisis/temas/no_lineales_1/images/gr_newton3.gif 

Como podemos apreciar en la siguiente tabla de valores, la convergencia de los valores obtenidos hacia el valor de la raíz es sumamente veloz.

https://chat.google.com/u/0/api/get_attachment_url?url_type=FIFE_URL&content_type=image%2Fpng&attachment_token=AH2N4gQJ9oYgSpxbkj9XkK1qKTT7WgEWO%2FOCaaUUFXCGXpffSZSCE6XWwMqr%2FBJePtc%2B1VjknTF5TCVqB%2F18OCvdO5T66eHCT9%2F6%2Bft%2FAEshDByEudYFC8DydMF0BjfzJ1PV3FjqqJDSbMTfcHirgTPclTrNnihgNojvoSiqiPtIg1Ae%2BOrmAixkFDQUigTzopk6Nb3G1yhXQwJRfzoTi0E%2BHKFJ%2BNNz2RD1tL1IPewE1cTd5wWOc7HZY7F6rk9ndxU9A4Pf2Gnexs5tYFf6uAlnQwASLJt0PqJdsQpkBH3VoZlNd7HtibcAjuEA2dJdg73jNiVF4aYqIDNA38Zy4loH%2BJ8Vu9LGVmsmAuua5C0zM8QQYAl47s7Q1zZP8%2Fv9KPjeec%2Bg%2BJfw5MOz%2Fn71V44wBUoDDq%2BM63u05gc7M7bouTYTfhfFAQKfgvfq3mF2YSFRkc%2BFwda8n1DtyIU1kmZVMeTy1vWqfu0hlK7%2FDgWCAxNKeeyrwmfGd1RzLabKRKklJTc6hLPDdS8JAs1FXQoZW5mx7vKYd9JtWvgCJYRrW1G1L7dddruPFSEb%2FjDPXmPV%2BdFv%2FqOZaC%2BPQjziQWnR1RICd1eP2Ak%2BP422o21ml%2Fru8sXhzzpzahH4Vw%3D%3D&sz=w512 