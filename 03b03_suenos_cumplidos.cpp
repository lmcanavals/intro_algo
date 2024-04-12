/*
 * Escribir un programa en C++ sin utilizar if else, puede usar en su lugar los
 * operadores (*,+) o también puede usar (?,: ), puede implementar funciones o
 * no.
 *
 * Una institución educativa “SUEÑOS CUMPLIDOS” lleva el control de sus
 * estudiantes asignándoles un código de alumno. Este código tiene 11 dígitos y
 * contiene la siguiente información del alumno: año y mes de ingreso, un código
 * que indica la modalidad de admisión, una letra que indica si va a ciencias o
 * letras y un indicadorsise trata de un alumno becado o no.
 *
 * La estructura del código de barras es el siguiente: AAAAMMIIFFB
 * Dónde:
 * AAAA: año de ingreso
 * MM: Mes de ingreso
 * II: Modalidad de ingreso, es el código ASCII de
 * E: (Examen de admisión)
 * I(Ingreso directo)FF:
 * Es el código ASCII de si va a ciencias (C) o Humanidades (H)
 * B: 1 si es becado y 0 si no es becado
 * Se le solicita que elabore un programa en C++ que reciba como dato el código
 * de alumno y luego nos imprima los siguientes datos tal como se muestra en el
 * ejemplo.
 *
 * Para obtener la letra de la facultad utilizar la siguiente tabla:
 * Código de modalidad de admisión | Sigla de la modalidad de admisión
 * 66 E (Examen de admisión)
 * 77 I (Ingreso directo)
 * 
 * Facultad
 * 70 C (Ciencias)
 * 72 H (Humanidades)
 *
 * Ejemplo:
 * Ingrese código de barras: 
 * 20170666721Entonces el programa
 * debe imprimir:
 * Año de ingreso: 2017
 * Mes de ingreso: 06
 * Modalidad de admisión: E
 * Categoría: H
 * ¿Es becado? (0: No; 1; Sí): 1
 **/
