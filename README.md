## Project: 02_CMSIS_Register_Access

## Objective: Implement a GPIO-based logic control using CMSIS (Cortex Microcontroller Software Interface Standard) register access on STM32F446RE.

## Functionality: 
The system controls a user LED (PA5) based on a push-button input (PC13) configured with an internal pull-down resistor. The LED remains active for a predefined duration of 8 seconds upon triggering.

## Technical Focus: 
Moving from pure hardware memory-mapping to standardized peripheral structures provided by the CMSIS library, improving code readability and portability while maintaining bare-metal efficiency.

## Key Concepts:
- GPIO Configuration using CMSIS structures (Input/Output modes).
- Standardized Pull-down Resistor implementation.
- Timing control and Debouncing.
- Utilizing predefined core headers instead of manual address mapping.
- A simple instruction executes in 1 microsecond.

### 📸 1. Hardware Setup 
Here is the clean setup of the STM32F446RE board:
<img width="1228" height="739" alt="STM32F446RE" src="https://github.com/user-attachments/assets/21a6b14e-9e50-4504-b2b7-ed1d9acd9bc3" />

### 2. Project Execution 
https://github.com/user-attachments/assets/53ad3c09-5121-41ec-8bc3-15554d260b65


