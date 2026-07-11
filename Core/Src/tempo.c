#include "tempo.h"

void counter (volatile uint32_t CNT	){
	for(; CNT>0 ; CNT--);
}
