int rows; // variable para guardar el número de filas ingresado por el usuario

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial
  while (!Serial);    // Espera a que la comunicación serial esté disponible
}
void loop() {
  Serial.println("Ingrese el número de filas para el Triángulo de Pascal: "); // Pide al usuario que ingrese el número de filas
  while (!Serial.available()); // Espera a que el usuario ingrese el número de filas
  rows = Serial.parseInt();    // Lee el número de filas ingresado por el usuario
   for (int i = 0; i < rows; i++) {
    int coeficiente = 1;
    for (int j = 0; j <= i; j++) {
      Serial.print(coeficiente);
      Serial.print(" ");
      coeficiente = coeficiente * (i - j) / (j + 1);
    }
Serial.println();
   }
   }
