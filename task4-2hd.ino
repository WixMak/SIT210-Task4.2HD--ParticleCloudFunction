int red = D5;
int yellow = D4;
int green = D3;
void setup() {
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    
    Particle.function("traffic_light",light);

}

void loop() {

}

void offlight(){
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
}

int light(String command){
    offlight();
    if(command == "Red"){
        digitalWrite(red, HIGH);
    }
    else if(command == "Yellow"){
        digitalWrite(yellow, HIGH);
    }
    else if(command == "Green"){
        digitalWrite(green,HIGH);
    }
    else if(command == "Off"){
        offlight();
        
    }
    else{
        
    }
    return 0 ;
}
