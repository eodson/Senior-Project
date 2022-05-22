#define VERBOSE 0
void setup() {
  setup_Console();
  setup_Matrix();
  //  test_Matrix();
  Serial.println("About to test" );
  delay(1000);
//  test_Set_Matrix1();
test_string_to_indexes();
  //  clear_Matrix();
  //  setup_Console();
  //Serial.begin(115200);

}

void loop() {
  //  Serial.print("hello");
  Check_Coms();
}
