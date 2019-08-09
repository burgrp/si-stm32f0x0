namespace target {
  namespace rcc {
    namespace reg {
      
      /**
        Clock control register
      */
      class CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Internal High Speed clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSION() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Internal High Speed clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSION(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Internal High Speed clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSIRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Internal High Speed clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSIRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Internal High Speed clock trimming
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getHSITRIM() volatile {
          return (raw & (0x1F << 3)) >> 3;
        }
        /**
          Sets Internal High Speed clock trimming
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setHSITRIM(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 3)) | ((value << 3) & (0x1F << 3));
        }
        /**
          Gets Internal High Speed clock Calibration
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getHSICAL() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets Internal High Speed clock Calibration
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setHSICAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets External High Speed clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSEON() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets External High Speed clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSEON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets External High Speed clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDY() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets External High Speed clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets External High Speed clock Bypass
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSEBYP() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets External High Speed clock Bypass
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSEBYP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets Clock Security System enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSON() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Clock Security System enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets PLL enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLON() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets PLL enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets PLL clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDY() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets PLL clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
      };
      
      /**
        Clock configuration register (RCC_CFGR)
      */
      class CFGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets System clock Switch
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSW() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets System clock Switch
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSW(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets System Clock Switch Status
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSWS() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets System Clock Switch Status
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSWS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets AHB prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHPRE() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets AHB prescaler
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHPRE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
        /**
          Gets APB Low speed prescaler (APB1)
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPPRE() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets APB Low speed prescaler (APB1)
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPPRE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets ADC prescaler
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCPRE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets ADC prescaler
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCPRE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets PLL input clock source
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPLLSRC() volatile {
          return (raw & (0x3 << 15)) >> 15;
        }
        /**
          Sets PLL input clock source
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPLLSRC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 15)) | ((value << 15) & (0x3 << 15));
        }
        /**
          Gets HSE divider for PLL entry
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLXTPRE() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets HSE divider for PLL entry
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLXTPRE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets PLL Multiplication Factor
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPLLMUL() volatile {
          return (raw & (0xF << 18)) >> 18;
        }
        /**
          Sets PLL Multiplication Factor
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPLLMUL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 18)) | ((value << 18) & (0xF << 18));
        }
        /**
          Gets Microcontroller clock output
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMCO() volatile {
          return (raw & (0x7 << 24)) >> 24;
        }
        /**
          Sets Microcontroller clock output
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMCO(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 24)) | ((value << 24) & (0x7 << 24));
        }
        /**
          Gets Microcontroller Clock Output Prescaler
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMCOPRE() volatile {
          return (raw & (0x7 << 28)) >> 28;
        }
        /**
          Sets Microcontroller Clock Output Prescaler
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMCOPRE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 28)) | ((value << 28) & (0x7 << 28));
        }
        /**
          Gets PLL clock not divided for MCO
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLNODIV() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets PLL clock not divided for MCO
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLNODIV(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        Clock interrupt register (RCC_CIR)
      */
      class CIR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets LSI Ready Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDYF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets LSI Ready Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets LSE Ready Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDYF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets LSE Ready Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets HSI Ready Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSIRDYF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets HSI Ready Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSIRDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets HSE Ready Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDYF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets HSE Ready Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets PLL Ready Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDYF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets PLL Ready Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets HSI14 ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI14RDYF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets HSI14 ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI14RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets HSI48 ready interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDYF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets HSI48 ready interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDYF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Clock Security System Interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSF() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Clock Security System Interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets LSI Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDYIE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets LSI Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets LSE Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDYIE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets LSE Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets HSI Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSIRDYIE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets HSI Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSIRDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets HSE Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDYIE() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets HSE Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets PLL Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDYIE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets PLL Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets HSI14 ready interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI14RDYE() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets HSI14 ready interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI14RDYE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets HSI48 ready interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDYIE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets HSI48 ready interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDYIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets LSI Ready Interrupt Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDYC() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets LSI Ready Interrupt Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets LSE Ready Interrupt Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDYC() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets LSE Ready Interrupt Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets HSI Ready Interrupt Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSIRDYC() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets HSI Ready Interrupt Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSIRDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets HSE Ready Interrupt Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSERDYC() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets HSE Ready Interrupt Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSERDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets PLL Ready Interrupt Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPLLRDYC() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets PLL Ready Interrupt Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPLLRDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets HSI 14 MHz Ready Interrupt Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI14RDYC() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets HSI 14 MHz Ready Interrupt Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI14RDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets HSI48 Ready Interrupt Clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDYC() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets HSI48 Ready Interrupt Clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDYC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Clock security system interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSSC() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets Clock security system interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSSC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
      };
      
      /**
        APB2 peripheral reset register (RCC_APB2RSTR)
      */
      class APB2RSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SYSCFG and COMP reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYSCFGRST() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets SYSCFG and COMP reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYSCFGRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets ADC interface reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCRST() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets ADC interface reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets TIM1 timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM1RST() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets TIM1 timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM1RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets SPI 1 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI1RST() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets SPI 1 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI1RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets USART1 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART1RST() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets USART1 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART1RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets TIM15 timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM15RST() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets TIM15 timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM15RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets TIM16 timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM16RST() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets TIM16 timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM16RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets TIM17 timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM17RST() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets TIM17 timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM17RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets Debug MCU reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGMCURST() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets Debug MCU reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGMCURST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
      };
      
      /**
        APB1 peripheral reset register (RCC_APB1RSTR)
      */
      class APB1RSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets USART 2 reset
          @param index in range 2..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART_RST(int index) volatile {
          return (raw & (0x1 << (17 + 1 * (index - 2)))) >> (17 + 1 * (index - 2));
        }
        /**
          Sets USART 2 reset
          @param index in range 2..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART_RST(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (17 + 1 * (index - 2)))) | ((value << (17 + 1 * (index - 2))) & (0x1 << (17 + 1 * (index - 2))));
        }
        /**
          Gets USART 2 reset
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getUSART_RST() volatile {
          return (raw & (0xF << 17)) >> 17;
        }
        /**
          Sets USART 2 reset
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setUSART_RST(unsigned long value) volatile {
          raw = (raw & ~(0xF << 17)) | ((value << 17) & (0xF << 17));
        }
        /**
          Gets I2C1 reset
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getC_RST(int index) volatile {
          return (raw & (0x1 << (21 + 1 * (index - 1)))) >> (21 + 1 * (index - 1));
        }
        /**
          Sets I2C1 reset
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setC_RST(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 1)))) | ((value << (21 + 1 * (index - 1))) & (0x1 << (21 + 1 * (index - 1))));
        }
        /**
          Gets I2C1 reset
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getC_RST() volatile {
          return (raw & (0x3 << 21)) >> 21;
        }
        /**
          Sets I2C1 reset
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setC_RST(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((value << 21) & (0x3 << 21));
        }
        /**
          Gets Timer 3 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM3RST() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Timer 3 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM3RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Timer 6 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM6RST() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Timer 6 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM6RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets TIM7 timer reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM7RST() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets TIM7 timer reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM7RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Timer 14 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM14RST() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Timer 14 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM14RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Window watchdog reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWWDGRST() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Window watchdog reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWWDGRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets SPI2 reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI2RST() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets SPI2 reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI2RST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets USB interface reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSBRST() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets USB interface reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSBRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets Power interface reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPWRRST() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Power interface reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPWRRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
      };
      
      /**
        AHB Peripheral Clock enable register (RCC_AHBENR)
      */
      class AHBENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DMA1 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMA1EN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets DMA1 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMA1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets SRAM interface clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSRAMEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets SRAM interface clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSRAMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets FLITF clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFLITFEN() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets FLITF clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFLITFEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets CRC clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCRCEN() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets CRC clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCRCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets I/O port A clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPAEN() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets I/O port A clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPAEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets I/O port B clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPBEN() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets I/O port B clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPBEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets I/O port C clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPCEN() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets I/O port C clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets I/O port F clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPFEN() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets I/O port F clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPFEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
      };
      
      /**
        APB2 peripheral clock enable register (RCC_APB2ENR)
      */
      class APB2ENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SYSCFG clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYSCFGEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets SYSCFG clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYSCFGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets ADC 1 interface clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCEN() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets ADC 1 interface clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets TIM1 Timer clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM1EN() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets TIM1 Timer clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets SPI 1 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI1EN() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets SPI 1 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets USART1 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART1EN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets USART1 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART1EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets TIM15 timer clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM15EN() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets TIM15 timer clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM15EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets TIM16 timer clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM16EN() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets TIM16 timer clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM16EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets TIM17 timer clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM17EN() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets TIM17 timer clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM17EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets MCU debug module clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBGMCUEN() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets MCU debug module clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBGMCUEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
      };
      
      /**
        APB1 peripheral clock enable register (RCC_APB1ENR)
      */
      class APB1ENR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets USART 2 clock enable
          @param index in range 2..5
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSART_EN(int index) volatile {
          return (raw & (0x1 << (17 + 1 * (index - 2)))) >> (17 + 1 * (index - 2));
        }
        /**
          Sets USART 2 clock enable
          @param index in range 2..5
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSART_EN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (17 + 1 * (index - 2)))) | ((value << (17 + 1 * (index - 2))) & (0x1 << (17 + 1 * (index - 2))));
        }
        /**
          Gets USART 2 clock enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getUSART_EN() volatile {
          return (raw & (0xF << 17)) >> 17;
        }
        /**
          Sets USART 2 clock enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setUSART_EN(unsigned long value) volatile {
          raw = (raw & ~(0xF << 17)) | ((value << 17) & (0xF << 17));
        }
        /**
          Gets I2C 1 clock enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getC_EN(int index) volatile {
          return (raw & (0x1 << (21 + 1 * (index - 1)))) >> (21 + 1 * (index - 1));
        }
        /**
          Sets I2C 1 clock enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setC_EN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 1)))) | ((value << (21 + 1 * (index - 1))) & (0x1 << (21 + 1 * (index - 1))));
        }
        /**
          Gets I2C 1 clock enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getC_EN() volatile {
          return (raw & (0x3 << 21)) >> 21;
        }
        /**
          Sets I2C 1 clock enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setC_EN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((value << 21) & (0x3 << 21));
        }
        /**
          Gets Timer 3 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM3EN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Timer 3 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM3EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Timer 6 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM6EN() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Timer 6 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM6EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets TIM7 timer clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM7EN() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets TIM7 timer clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM7EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Timer 14 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIM14EN() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Timer 14 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIM14EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Window watchdog clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWWDGEN() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Window watchdog clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWWDGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets SPI 2 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSPI2EN() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets SPI 2 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSPI2EN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets USB interface clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSBRST() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets USB interface clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSBRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets Power interface clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPWREN() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Power interface clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPWREN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
      };
      
      /**
        Backup domain control register (RCC_BDCR)
      */
      class BDCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Low Speed oscillator enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSEON() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets External Low Speed oscillator enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSEON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets External Low Speed oscillator ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSERDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets External Low Speed oscillator ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSERDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets External Low Speed oscillator bypass
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSEBYP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets External Low Speed oscillator bypass
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSEBYP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets LSE oscillator drive capability
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLSEDRV() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets LSE oscillator drive capability
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setLSEDRV(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
        }
        /**
          Gets RTC clock source selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRTCSEL() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets RTC clock source selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRTCSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets RTC clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTCEN() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets RTC clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Backup domain software reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBDRST() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Backup domain software reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBDRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
      };
      
      /**
        Control/status register (RCC_CSR)
      */
      class CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Internal low speed oscillator enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSION() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Internal low speed oscillator enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSION(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Internal low speed oscillator ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSIRDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Internal low speed oscillator ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSIRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Remove reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRMVF() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets Remove reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRMVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
        /**
          Gets Option byte loader reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOBLRSTF() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets Option byte loader reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOBLRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
        /**
          Gets PIN reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINRSTF() volatile {
          return (raw & (0x1 << 26)) >> 26;
        }
        /**
          Sets PIN reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((value << 26) & (0x1 << 26));
        }
        /**
          Gets POR/PDR reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPORRSTF() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets POR/PDR reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPORRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets Software reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSFTRSTF() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets Software reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSFTRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets Independent watchdog reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIWDGRSTF() volatile {
          return (raw & (0x1 << 29)) >> 29;
        }
        /**
          Sets Independent watchdog reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIWDGRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((value << 29) & (0x1 << 29));
        }
        /**
          Gets Window watchdog reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWWDGRSTF() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Window watchdog reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWWDGRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets Low-power reset flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPWRRSTF() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Low-power reset flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPWRRSTF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        AHB peripheral reset register
      */
      class AHBRSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets I/O port A reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPARST() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets I/O port A reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPARST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets I/O port B reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPBRST() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets I/O port B reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPBRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets I/O port C reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPCRST() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets I/O port C reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPCRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets I/O port D reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPDRST() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets I/O port D reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPDRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets I/O port F reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIOPFRST() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets I/O port F reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIOPFRST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
      };
      
      /**
        Clock configuration register 2
      */
      class CFGR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PREDIV division factor
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPREDIV() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets PREDIV division factor
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setPREDIV(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        Clock configuration register 3
      */
      class CFGR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets USART1 clock source selection
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getUSART_SW(int index) volatile {
          return (raw & (0x3 << (0 + 16 * (index - 1)))) >> (0 + 16 * (index - 1));
        }
        /**
          Sets USART1 clock source selection
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setUSART_SW(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 16 * (index - 1)))) | ((value << (0 + 16 * (index - 1))) & (0x3 << (0 + 16 * (index - 1))));
        }
        /**
          Gets USART1 clock source selection
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getUSART_SW() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets USART1 clock source selection
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setUSART_SW(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets I2C1 clock source selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C1SW() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets I2C1 clock source selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C1SW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets HDMI CEC clock source selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCECSW() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets HDMI CEC clock source selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCECSW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets USB clock source selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSBSW() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets USB clock source selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSBSW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets ADC clock source selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADCSW() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets ADC clock source selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADCSW(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
      };
      
      /**
        Clock control register 2
      */
      class CR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets HSI14 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI14ON() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets HSI14 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI14ON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets HR14 clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI14RDY() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets HR14 clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI14RDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets HSI14 clock request from ADC disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI14DIS() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets HSI14 clock request from ADC disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI14DIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets HSI14 clock trimming
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getHSI14TRIM() volatile {
          return (raw & (0x1F << 3)) >> 3;
        }
        /**
          Sets HSI14 clock trimming
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setHSI14TRIM(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 3)) | ((value << 3) & (0x1F << 3));
        }
        /**
          Gets HSI14 clock calibration
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getHSI14CAL() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets HSI14 clock calibration
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setHSI14CAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets HSI48 clock enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48ON() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets HSI48 clock enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48ON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets HSI48 clock ready flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48RDY() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets HSI48 clock ready flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48RDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets HSI48 factory clock calibration
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHSI48CAL() volatile {
          return (raw & (0x1 << 24)) >> 24;
        }
        /**
          Sets HSI48 factory clock calibration
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHSI48CAL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((value << 24) & (0x1 << 24));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Clock control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_CFGR[4];
          /**
            Clock configuration register (RCC_CFGR)
          */
          volatile reg::CFGR CFGR;
        };
        struct {
          volatile char _space_CIR[8];
          /**
            Clock interrupt register (RCC_CIR)
          */
          volatile reg::CIR CIR;
        };
        struct {
          volatile char _space_APB2RSTR[12];
          /**
            APB2 peripheral reset register (RCC_APB2RSTR)
          */
          volatile reg::APB2RSTR APB2RSTR;
        };
        struct {
          volatile char _space_APB1RSTR[16];
          /**
            APB1 peripheral reset register (RCC_APB1RSTR)
          */
          volatile reg::APB1RSTR APB1RSTR;
        };
        struct {
          volatile char _space_AHBENR[20];
          /**
            AHB Peripheral Clock enable register (RCC_AHBENR)
          */
          volatile reg::AHBENR AHBENR;
        };
        struct {
          volatile char _space_APB2ENR[24];
          /**
            APB2 peripheral clock enable register (RCC_APB2ENR)
          */
          volatile reg::APB2ENR APB2ENR;
        };
        struct {
          volatile char _space_APB1ENR[28];
          /**
            APB1 peripheral clock enable register (RCC_APB1ENR)
          */
          volatile reg::APB1ENR APB1ENR;
        };
        struct {
          volatile char _space_BDCR[32];
          /**
            Backup domain control register (RCC_BDCR)
          */
          volatile reg::BDCR BDCR;
        };
        struct {
          volatile char _space_CSR[36];
          /**
            Control/status register (RCC_CSR)
          */
          volatile reg::CSR CSR;
        };
        struct {
          volatile char _space_AHBRSTR[40];
          /**
            AHB peripheral reset register
          */
          volatile reg::AHBRSTR AHBRSTR;
        };
        struct {
          volatile char _space_CFGR2[44];
          /**
            Clock configuration register 2
          */
          volatile reg::CFGR2 CFGR2;
        };
        struct {
          volatile char _space_CFGR3[48];
          /**
            Clock configuration register 3
          */
          volatile reg::CFGR3 CFGR3;
        };
        struct {
          volatile char _space_CR2[52];
          /**
            Clock control register 2
          */
          volatile reg::CR2 CR2;
        };
      };
    };
  }
  
  extern rcc::Peripheral RCC;
}