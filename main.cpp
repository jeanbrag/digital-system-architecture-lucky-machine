/*#include <CountingService.h>
#include <TurnOffLedService.h>*/
#include <stdio.h>
#include <Led.h>
#include <ControlService.h>

//CLASSES DE DISPOSITIVOS
Botao *btnLD;
Botao *btnSorteio;
Botao *btnLedOff;

Led ledStb(gpio_PTB18);
Led ledSort(gpio_PTB19);

//CLASSES DE DIGITAIS
Contador *contador;
Comparador *comparador;
FlipFlop *flipflop;
Temporizador temporizador(10);

//CLASSES DE SERVIÇOS DE COMUNICAÇÃO
OnOffService serviceLD;
SortService serviceSort;
TurnOffLedService serviceTurnOffLed;
CountService serviceCount;

//CLASSE DO CONTROLADOR
ControlService serviceControl;


extern "C"{
	void SysTick_Handler(){
		//contador->incrementa();
		//serviceControl.setSid(count);
		serviceControl.doService(count,btnLD,
										btnSorteio,
										btnLedOff,
										contador,
										comparador,
										flipflop,
										temporizador,
										serviceLD,
										serviceSort,
										serviceTurnOffLed,
										serviceCount);

	}
}

int main(){
		/*contador = new Contador;
		comparador = new Comparador;
		flipflop = new FlipFlop;
		btnLD = new Botao(gpio_PTA1);
		btnSorteio = new Botao(gpio_PTA2);
		btnLedOff = new Botao(gpio_PTD4);*/

	serviceControl.setup(contador, comparador, flipflop, btnLD, btnSorteio, btnLedOff);

	while(1){
		serviceControl.readInputs(btnLD, btnSorteio, btnLedOff);


		serviceControl.selectService(serviceControl.readBtn());

		serviceControl.doService(serviceControl.readSid(),
								btnLD,
								btnSorteio,
								btnLedOff,
								contador,
								comparador,
								flipflop,
								temporizador,
								serviceLD,
								serviceSort,
								serviceTurnOffLed,
								serviceCount);

		serviceControl.writeOutputs(serviceControl.readLed(), ledStb, ledSort);
	}
	return 0;
}
