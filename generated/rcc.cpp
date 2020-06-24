namespace target {
  namespace rcc {
    
    /**
      Clock control register
    */
    namespace CR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Internal High Speed clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSION() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Internal High Speed clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSION(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Internal High Speed clock ready flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSIRDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Internal High Speed clock ready flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSIRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Internal High Speed clock trimming
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getHSITRIM() volatile {
          return ((raw & (0x1F << 3)) >> 3);
        }
        /**
          Sets Internal High Speed clock trimming
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setHSITRIM(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 3)) | ((((value)) << 3) & (0x1F << 3));
          return *(Register*)this;
        }
        /**
          Gets Internal High Speed clock Calibration
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getHSICAL() volatile {
          return ((raw & (0xFF << 8)) >> 8);
        }
        /**
          Sets Internal High Speed clock Calibration
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setHSICAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((((value)) << 8) & (0xFF << 8));
          return *(Register*)this;
        }
        /**
          Gets External High Speed clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSEON() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets External High Speed clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSEON(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets External High Speed clock ready flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSERDY() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets External High Speed clock ready flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSERDY(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets External High Speed clock Bypass
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSEBYP() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets External High Speed clock Bypass
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSEBYP(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets Clock Security System enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCSSON() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets Clock Security System enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCSSON(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets PLL enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPLLON() volatile {
          return ((raw & (0x1 << 24)) >> 24);
        }
        /**
          Sets PLL enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPLLON(bool value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((((value)) << 24) & (0x1 << 24));
          return *(Register*)this;
        }
        /**
          Gets PLL clock ready flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getPLLRDY() volatile {
          return ((raw & (0x1 << 25)) >> 25);
        }
        /**
          Sets PLL clock ready flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPLLRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((((value)) << 25) & (0x1 << 25));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Clock configuration register (RCC_CFGR)
    */
    namespace CFGR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets System clock Switch
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSW() volatile {
          return ((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets System clock Switch
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSW(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
        /**
          Gets System Clock Switch Status
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSWS() volatile {
          return ((raw & (0x3 << 2)) >> 2);
        }
        /**
          Sets System Clock Switch Status
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSWS(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((((value)) << 2) & (0x3 << 2));
          return *(Register*)this;
        }
        /**
          Gets AHB prescaler
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHPRE() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets AHB prescaler
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setHPRE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
        /**
          Gets APB Low speed prescaler (APB1)
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPPRE() volatile {
          return ((raw & (0x7 << 8)) >> 8);
        }
        /**
          Sets APB Low speed prescaler (APB1)
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setPPRE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((((value)) << 8) & (0x7 << 8));
          return *(Register*)this;
        }
        /**
          Gets ADC prescaler
          @return boolean value
        */
        __attribute__((always_inline)) bool getADCPRE() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets ADC prescaler
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADCPRE(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets PLL input clock source
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPLLSRC() volatile {
          return ((raw & (0x3 << 15)) >> 15);
        }
        /**
          Sets PLL input clock source
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPLLSRC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 15)) | ((((value)) << 15) & (0x3 << 15));
          return *(Register*)this;
        }
        /**
          Gets HSE divider for PLL entry
          @return boolean value
        */
        __attribute__((always_inline)) bool getPLLXTPRE() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets HSE divider for PLL entry
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPLLXTPRE(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets PLL Multiplication Factor
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPLLMUL() volatile {
          return ((raw & (0xF << 18)) >> 18);
        }
        /**
          Sets PLL Multiplication Factor
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setPLLMUL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 18)) | ((((value)) << 18) & (0xF << 18));
          return *(Register*)this;
        }
        /**
          Gets Microcontroller clock output
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMCO() volatile {
          return ((raw & (0x7 << 24)) >> 24);
        }
        /**
          Sets Microcontroller clock output
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setMCO(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 24)) | ((((value)) << 24) & (0x7 << 24));
          return *(Register*)this;
        }
        /**
          Gets Microcontroller Clock Output Prescaler
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMCOPRE() volatile {
          return ((raw & (0x7 << 28)) >> 28);
        }
        /**
          Sets Microcontroller Clock Output Prescaler
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setMCOPRE(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 28)) | ((((value)) << 28) & (0x7 << 28));
          return *(Register*)this;
        }
        /**
          Gets PLL clock not divided for MCO
          @return boolean value
        */
        __attribute__((always_inline)) bool getPLLNODIV() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets PLL clock not divided for MCO
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPLLNODIV(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Clock interrupt register (RCC_CIR)
    */
    namespace CIR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets LSI Ready Interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSIRDYF() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets LSI Ready Interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSIRDYF(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets LSE Ready Interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSERDYF() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets LSE Ready Interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSERDYF(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets HSI Ready Interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSIRDYF() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets HSI Ready Interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSIRDYF(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets HSE Ready Interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSERDYF() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets HSE Ready Interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSERDYF(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets PLL Ready Interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getPLLRDYF() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets PLL Ready Interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPLLRDYF(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets HSI14 ready interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI14RDYF() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets HSI14 ready interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI14RDYF(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets HSI48 ready interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI48RDYF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets HSI48 ready interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI48RDYF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Clock Security System Interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCSSF() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Clock Security System Interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCSSF(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets LSI Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSIRDYIE() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets LSI Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSIRDYIE(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets LSE Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSERDYIE() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets LSE Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSERDYIE(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets HSI Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSIRDYIE() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets HSI Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSIRDYIE(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets HSE Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSERDYIE() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets HSE Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSERDYIE(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets PLL Ready Interrupt Enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPLLRDYIE() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets PLL Ready Interrupt Enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPLLRDYIE(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets HSI14 ready interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI14RDYE() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets HSI14 ready interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI14RDYE(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets HSI48 ready interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI48RDYIE() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets HSI48 ready interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI48RDYIE(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets LSI Ready Interrupt Clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSIRDYC() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets LSI Ready Interrupt Clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSIRDYC(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets LSE Ready Interrupt Clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSERDYC() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets LSE Ready Interrupt Clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSERDYC(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets HSI Ready Interrupt Clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSIRDYC() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets HSI Ready Interrupt Clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSIRDYC(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets HSE Ready Interrupt Clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSERDYC() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets HSE Ready Interrupt Clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSERDYC(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets PLL Ready Interrupt Clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getPLLRDYC() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets PLL Ready Interrupt Clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPLLRDYC(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets HSI 14 MHz Ready Interrupt Clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI14RDYC() volatile {
          return ((raw & (0x1 << 21)) >> 21);
        }
        /**
          Sets HSI 14 MHz Ready Interrupt Clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI14RDYC(bool value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((((value)) << 21) & (0x1 << 21));
          return *(Register*)this;
        }
        /**
          Gets HSI48 Ready Interrupt Clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI48RDYC() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets HSI48 Ready Interrupt Clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI48RDYC(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets Clock security system interrupt clear
          @return boolean value
        */
        __attribute__((always_inline)) bool getCSSC() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets Clock security system interrupt clear
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCSSC(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APB2 peripheral reset register (RCC_APB2RSTR)
    */
    namespace APB2RSTR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets SYSCFG and COMP reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYSCFGRST() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets SYSCFG and COMP reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYSCFGRST(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets ADC interface reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getADCRST() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets ADC interface reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADCRST(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets TIM1 timer reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM1RST() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets TIM1 timer reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM1RST(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets SPI 1 reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getSPI1RST() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets SPI 1 reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSPI1RST(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets USART1 reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART1RST() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets USART1 reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART1RST(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets TIM15 timer reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM15RST() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets TIM15 timer reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM15RST(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets TIM16 timer reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM16RST() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets TIM16 timer reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM16RST(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets TIM17 timer reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM17RST() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets TIM17 timer reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM17RST(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets Debug MCU reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBGMCURST() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets Debug MCU reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBGMCURST(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APB1 peripheral reset register (RCC_APB1RSTR)
    */
    namespace APB1RSTR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets USART 2 reset
          @param index in range 2..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART_RST(int index) volatile {
          return ((raw & (0x1 << (17 + 1 * (index - 2)))) >> (17 + 1 * (index - 2)));
        }
        /**
          Sets USART 2 reset
          @param index in range 2..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART_RST(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (17 + 1 * (index - 2)))) | ((((value)) << (17 + 1 * (index - 2))) & (0x1 << (17 + 1 * (index - 2))));
          return *(Register*)this;
        }
        /**
          Gets I2C1 reset
          @param index in range 1..2
          @return boolean value
        */
        __attribute__((always_inline)) bool getC_RST(int index) volatile {
          return ((raw & (0x1 << (21 + 1 * (index - 1)))) >> (21 + 1 * (index - 1)));
        }
        /**
          Sets I2C1 reset
          @param index in range 1..2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setC_RST(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 1)))) | ((((value)) << (21 + 1 * (index - 1))) & (0x1 << (21 + 1 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Timer 3 reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM3RST() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Timer 3 reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM3RST(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Timer 6 reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM6RST() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Timer 6 reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM6RST(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets TIM7 timer reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM7RST() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets TIM7 timer reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM7RST(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Timer 14 reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM14RST() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Timer 14 reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM14RST(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Window watchdog reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getWWDGRST() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Window watchdog reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWWDGRST(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets SPI2 reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getSPI2RST() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets SPI2 reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSPI2RST(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets USB interface reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSBRST() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets USB interface reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSBRST(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
        /**
          Gets Power interface reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getPWRRST() volatile {
          return ((raw & (0x1 << 28)) >> 28);
        }
        /**
          Sets Power interface reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPWRRST(bool value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
          return *(Register*)this;
        }
      };
    };
    
    /**
      AHB Peripheral Clock enable register (RCC_AHBENR)
    */
    namespace AHBENR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets DMA1 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDMA1EN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets DMA1 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDMA1EN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets SRAM interface clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSRAMEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets SRAM interface clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSRAMEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets FLITF clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getFLITFEN() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets FLITF clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFLITFEN(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets CRC clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCRCEN() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets CRC clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCRCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets I/O port A clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPAEN() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets I/O port A clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPAEN(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets I/O port B clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPBEN() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets I/O port B clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPBEN(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets I/O port C clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPCEN() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets I/O port C clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets I/O port F clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPFEN() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets I/O port F clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPFEN(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APB2 peripheral clock enable register (RCC_APB2ENR)
    */
    namespace APB2ENR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets SYSCFG clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYSCFGEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets SYSCFG clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYSCFGEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets ADC 1 interface clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getADCEN() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets ADC 1 interface clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets TIM1 Timer clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM1EN() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets TIM1 Timer clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM1EN(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets SPI 1 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSPI1EN() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets SPI 1 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSPI1EN(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets USART1 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART1EN() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets USART1 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART1EN(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets TIM15 timer clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM15EN() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets TIM15 timer clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM15EN(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets TIM16 timer clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM16EN() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets TIM16 timer clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM16EN(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets TIM17 timer clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM17EN() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets TIM17 timer clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM17EN(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets MCU debug module clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBGMCUEN() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets MCU debug module clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBGMCUEN(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
      };
    };
    
    /**
      APB1 peripheral clock enable register (RCC_APB1ENR)
    */
    namespace APB1ENR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets USART 2 clock enable
          @param index in range 2..5
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSART_EN(int index) volatile {
          return ((raw & (0x1 << (17 + 1 * (index - 2)))) >> (17 + 1 * (index - 2)));
        }
        /**
          Sets USART 2 clock enable
          @param index in range 2..5
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSART_EN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (17 + 1 * (index - 2)))) | ((((value)) << (17 + 1 * (index - 2))) & (0x1 << (17 + 1 * (index - 2))));
          return *(Register*)this;
        }
        /**
          Gets I2C 1 clock enable
          @param index in range 1..2
          @return boolean value
        */
        __attribute__((always_inline)) bool getC_EN(int index) volatile {
          return ((raw & (0x1 << (21 + 1 * (index - 1)))) >> (21 + 1 * (index - 1)));
        }
        /**
          Sets I2C 1 clock enable
          @param index in range 1..2
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setC_EN(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (21 + 1 * (index - 1)))) | ((((value)) << (21 + 1 * (index - 1))) & (0x1 << (21 + 1 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Timer 3 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM3EN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Timer 3 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM3EN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Timer 6 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM6EN() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Timer 6 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM6EN(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets TIM7 timer clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM7EN() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets TIM7 timer clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM7EN(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Timer 14 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIM14EN() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Timer 14 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIM14EN(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Window watchdog clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getWWDGEN() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Window watchdog clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWWDGEN(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets SPI 2 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSPI2EN() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets SPI 2 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSPI2EN(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets USB interface clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSBRST() volatile {
          return ((raw & (0x1 << 23)) >> 23);
        }
        /**
          Sets USB interface clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSBRST(bool value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((((value)) << 23) & (0x1 << 23));
          return *(Register*)this;
        }
        /**
          Gets Power interface clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPWREN() volatile {
          return ((raw & (0x1 << 28)) >> 28);
        }
        /**
          Sets Power interface clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPWREN(bool value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Backup domain control register (RCC_BDCR)
    */
    namespace BDCR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets External Low Speed oscillator enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSEON() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets External Low Speed oscillator enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSEON(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets External Low Speed oscillator ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSERDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets External Low Speed oscillator ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSERDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets External Low Speed oscillator bypass
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSEBYP() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets External Low Speed oscillator bypass
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSEBYP(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets LSE oscillator drive capability
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLSEDRV() volatile {
          return ((raw & (0x3 << 3)) >> 3);
        }
        /**
          Sets LSE oscillator drive capability
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setLSEDRV(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((((value)) << 3) & (0x3 << 3));
          return *(Register*)this;
        }
        /**
          Gets RTC clock source selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRTCSEL() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets RTC clock source selection
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setRTCSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets RTC clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getRTCEN() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets RTC clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRTCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Backup domain software reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getBDRST() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets Backup domain software reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBDRST(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Control/status register (RCC_CSR)
    */
    namespace CSR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Internal low speed oscillator enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSION() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Internal low speed oscillator enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSION(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Internal low speed oscillator ready
          @return boolean value
        */
        __attribute__((always_inline)) bool getLSIRDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Internal low speed oscillator ready
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLSIRDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Remove reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getRMVF() volatile {
          return ((raw & (0x1 << 24)) >> 24);
        }
        /**
          Sets Remove reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRMVF(bool value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((((value)) << 24) & (0x1 << 24));
          return *(Register*)this;
        }
        /**
          Gets Option byte loader reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getOBLRSTF() volatile {
          return ((raw & (0x1 << 25)) >> 25);
        }
        /**
          Sets Option byte loader reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOBLRSTF(bool value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((((value)) << 25) & (0x1 << 25));
          return *(Register*)this;
        }
        /**
          Gets PIN reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINRSTF() volatile {
          return ((raw & (0x1 << 26)) >> 26);
        }
        /**
          Sets PIN reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINRSTF(bool value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((((value)) << 26) & (0x1 << 26));
          return *(Register*)this;
        }
        /**
          Gets POR/PDR reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getPORRSTF() volatile {
          return ((raw & (0x1 << 27)) >> 27);
        }
        /**
          Sets POR/PDR reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPORRSTF(bool value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((((value)) << 27) & (0x1 << 27));
          return *(Register*)this;
        }
        /**
          Gets Software reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getSFTRSTF() volatile {
          return ((raw & (0x1 << 28)) >> 28);
        }
        /**
          Sets Software reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSFTRSTF(bool value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
          return *(Register*)this;
        }
        /**
          Gets Independent watchdog reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getIWDGRSTF() volatile {
          return ((raw & (0x1 << 29)) >> 29);
        }
        /**
          Sets Independent watchdog reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIWDGRSTF(bool value) volatile {
          raw = (raw & ~(0x1 << 29)) | ((((value)) << 29) & (0x1 << 29));
          return *(Register*)this;
        }
        /**
          Gets Window watchdog reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getWWDGRSTF() volatile {
          return ((raw & (0x1 << 30)) >> 30);
        }
        /**
          Sets Window watchdog reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWWDGRSTF(bool value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((((value)) << 30) & (0x1 << 30));
          return *(Register*)this;
        }
        /**
          Gets Low-power reset flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getLPWRRSTF() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets Low-power reset flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLPWRRSTF(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    
    /**
      AHB peripheral reset register
    */
    namespace AHBRSTR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets I/O port A reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPARST() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets I/O port A reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPARST(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets I/O port B reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPBRST() volatile {
          return ((raw & (0x1 << 18)) >> 18);
        }
        /**
          Sets I/O port B reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPBRST(bool value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((((value)) << 18) & (0x1 << 18));
          return *(Register*)this;
        }
        /**
          Gets I/O port C reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPCRST() volatile {
          return ((raw & (0x1 << 19)) >> 19);
        }
        /**
          Sets I/O port C reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPCRST(bool value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((((value)) << 19) & (0x1 << 19));
          return *(Register*)this;
        }
        /**
          Gets I/O port D reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPDRST() volatile {
          return ((raw & (0x1 << 20)) >> 20);
        }
        /**
          Sets I/O port D reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPDRST(bool value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((((value)) << 20) & (0x1 << 20));
          return *(Register*)this;
        }
        /**
          Gets I/O port F reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getIOPFRST() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets I/O port F reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setIOPFRST(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Clock configuration register 2
    */
    namespace CFGR2 {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets PREDIV division factor
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getPREDIV() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets PREDIV division factor
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setPREDIV(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Clock configuration register 3
    */
    namespace CFGR3 {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets USART1 clock source selection
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getUSART_SW(int index) volatile {
          return ((raw & (0x3 << (0 + 16 * (index - 1)))) >> (0 + 16 * (index - 1)));
        }
        /**
          Sets USART1 clock source selection
          @param index in range 1..2
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setUSART_SW(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 16 * (index - 1)))) | ((((value)) << (0 + 16 * (index - 1))) & (0x3 << (0 + 16 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets I2C1 clock source selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getI2C1SW() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets I2C1 clock source selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setI2C1SW(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets HDMI CEC clock source selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getCECSW() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets HDMI CEC clock source selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCECSW(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets USB clock source selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getUSBSW() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets USB clock source selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUSBSW(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets ADC clock source selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getADCSW() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets ADC clock source selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setADCSW(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Clock control register 2
    */
    namespace CR2 {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets HSI14 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI14ON() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets HSI14 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI14ON(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets HR14 clock ready flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI14RDY() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets HR14 clock ready flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI14RDY(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets HSI14 clock request from ADC disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI14DIS() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets HSI14 clock request from ADC disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI14DIS(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets HSI14 clock trimming
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getHSI14TRIM() volatile {
          return ((raw & (0x1F << 3)) >> 3);
        }
        /**
          Sets HSI14 clock trimming
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setHSI14TRIM(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 3)) | ((((value)) << 3) & (0x1F << 3));
          return *(Register*)this;
        }
        /**
          Gets HSI14 clock calibration
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getHSI14CAL() volatile {
          return ((raw & (0xFF << 8)) >> 8);
        }
        /**
          Sets HSI14 clock calibration
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setHSI14CAL(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((((value)) << 8) & (0xFF << 8));
          return *(Register*)this;
        }
        /**
          Gets HSI48 clock enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI48ON() volatile {
          return ((raw & (0x1 << 16)) >> 16);
        }
        /**
          Sets HSI48 clock enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI48ON(bool value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((((value)) << 16) & (0x1 << 16));
          return *(Register*)this;
        }
        /**
          Gets HSI48 clock ready flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI48RDY() volatile {
          return ((raw & (0x1 << 17)) >> 17);
        }
        /**
          Sets HSI48 clock ready flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI48RDY(bool value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((((value)) << 17) & (0x1 << 17));
          return *(Register*)this;
        }
        /**
          Gets HSI48 factory clock calibration
          @return boolean value
        */
        __attribute__((always_inline)) bool getHSI48CAL() volatile {
          return ((raw & (0x1 << 24)) >> 24);
        }
        /**
          Sets HSI48 factory clock calibration
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHSI48CAL(bool value) volatile {
          raw = (raw & ~(0x1 << 24)) | ((((value)) << 24) & (0x1 << 24));
          return *(Register*)this;
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
          CR::Register CR;
        };
        struct {
          char _space_CFGR[0x4];
          /**
            Clock configuration register (RCC_CFGR)
          */
          CFGR::Register CFGR;
        };
        struct {
          char _space_CIR[0x8];
          /**
            Clock interrupt register (RCC_CIR)
          */
          CIR::Register CIR;
        };
        struct {
          char _space_APB2RSTR[0xc];
          /**
            APB2 peripheral reset register (RCC_APB2RSTR)
          */
          APB2RSTR::Register APB2RSTR;
        };
        struct {
          char _space_APB1RSTR[0x10];
          /**
            APB1 peripheral reset register (RCC_APB1RSTR)
          */
          APB1RSTR::Register APB1RSTR;
        };
        struct {
          char _space_AHBENR[0x14];
          /**
            AHB Peripheral Clock enable register (RCC_AHBENR)
          */
          AHBENR::Register AHBENR;
        };
        struct {
          char _space_APB2ENR[0x18];
          /**
            APB2 peripheral clock enable register (RCC_APB2ENR)
          */
          APB2ENR::Register APB2ENR;
        };
        struct {
          char _space_APB1ENR[0x1c];
          /**
            APB1 peripheral clock enable register (RCC_APB1ENR)
          */
          APB1ENR::Register APB1ENR;
        };
        struct {
          char _space_BDCR[0x20];
          /**
            Backup domain control register (RCC_BDCR)
          */
          BDCR::Register BDCR;
        };
        struct {
          char _space_CSR[0x24];
          /**
            Control/status register (RCC_CSR)
          */
          CSR::Register CSR;
        };
        struct {
          char _space_AHBRSTR[0x28];
          /**
            AHB peripheral reset register
          */
          AHBRSTR::Register AHBRSTR;
        };
        struct {
          char _space_CFGR2[0x2c];
          /**
            Clock configuration register 2
          */
          CFGR2::Register CFGR2;
        };
        struct {
          char _space_CFGR3[0x30];
          /**
            Clock configuration register 3
          */
          CFGR3::Register CFGR3;
        };
        struct {
          char _space_CR2[0x34];
          /**
            Clock control register 2
          */
          CR2::Register CR2;
        };
      };
    };
  }
  
  extern volatile rcc::Peripheral RCC;
}