package main

import (
	"log"
	"time"

	"github.com/tarm/serial"
)

func main() {
	c := &serial.Config{Name: "/dev/cu.usbmodem14201", Baud: 9600}
	s, err := serial.OpenPort(c)
	if err != nil {
		log.Fatal(err)
	}

	_, err = s.Write([]byte("j"))
	if err != nil {
		log.Fatal(err)
	}
	time.Sleep(time.Second * 2)
	_, err = s.Write([]byte("k"))
	if err != nil {
		log.Fatal(err)
	}

}
