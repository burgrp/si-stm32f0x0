namespace target {
  namespace tim_16_17 {
    
    /**
      control register 1
    */
    namespace CR1 {
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
          Gets Clock division
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCKD() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Clock division
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setCKD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Auto-reload preload enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getARPE() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Auto-reload preload enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setARPE(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets One-pulse mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getOPM() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets One-pulse mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOPM(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Update request source
          @return boolean value
        */
        __attribute__((always_inline)) bool getURS() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Update request source
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setURS(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Update disable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUDIS() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Update disable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUDIS(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Counter enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Counter enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      control register 2
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
          Gets Output Idle state 1
          @return boolean value
        */
        __attribute__((always_inline)) bool getOIS1N() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Output Idle state 1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOIS1N(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Output Idle state 1
          @return boolean value
        */
        __attribute__((always_inline)) bool getOIS1() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Output Idle state 1
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOIS1(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Capture/compare DMA selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getCCDS() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Capture/compare DMA selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCCDS(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Capture/compare control update selection
          @return boolean value
        */
        __attribute__((always_inline)) bool getCCUS() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Capture/compare control update selection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCCUS(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Capture/compare preloaded control
          @return boolean value
        */
        __attribute__((always_inline)) bool getCCPC() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Capture/compare preloaded control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCCPC(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA/Interrupt enable register
    */
    namespace DIER {
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
          Gets Trigger DMA request enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTDE() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Trigger DMA request enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTDE(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare 1 DMA request enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1DE() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Capture/Compare 1 DMA request enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1DE(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Update DMA request enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUDE() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Update DMA request enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUDE(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Break interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBIE() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Break interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBIE(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Trigger interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIE() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Trigger interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets COM interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMIE() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets COM interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMIE(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare 1 interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1IE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Capture/Compare 1 interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1IE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Update interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getUIE() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Update interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUIE(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      status register
    */
    namespace SR {
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
          Gets Capture/Compare 1 overcapture flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1OF() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Capture/Compare 1 overcapture flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1OF(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets Break interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getBIF() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Break interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBIF(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Trigger interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getTIF() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Trigger interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTIF(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets COM interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMIF() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets COM interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMIF(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Capture/compare 1 interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1IF() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Capture/compare 1 interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1IF(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Update interrupt flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getUIF() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Update interrupt flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUIF(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      event generation register
    */
    namespace EGR {
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
          Gets Break generation
          @return boolean value
        */
        __attribute__((always_inline)) bool getBG() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Break generation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBG(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Trigger generation
          @return boolean value
        */
        __attribute__((always_inline)) bool getTG() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Trigger generation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTG(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare control update generation
          @return boolean value
        */
        __attribute__((always_inline)) bool getCOMG() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Capture/Compare control update generation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCOMG(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Capture/compare 1 generation
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1G() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Capture/compare 1 generation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1G(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Update generation
          @return boolean value
        */
        __attribute__((always_inline)) bool getUG() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Update generation
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUG(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      capture/compare mode register (output mode)
    */
    namespace CCMR1_Output {
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
          Gets Output Compare 1 mode
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOC1M() volatile {
          return ((raw & (0x7 << 4)) >> 4);
        }
        /**
          Sets Output Compare 1 mode
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setOC1M(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((((value)) << 4) & (0x7 << 4));
          return *(Register*)this;
        }
        /**
          Gets Output Compare 1 preload enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOC1PE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Output Compare 1 preload enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOC1PE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Output Compare 1 fast enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOC1FE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Output Compare 1 fast enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOC1FE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare 1 selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC1S() volatile {
          return ((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Capture/Compare 1 selection
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setCC1S(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      capture/compare mode register 1 (input mode)
    */
    namespace CCMR1_Input {
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
          Gets Input capture 1 filter
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getIC1F() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets Input capture 1 filter
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setIC1F(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
        /**
          Gets Input capture 1 prescaler
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIC1PSC() volatile {
          return ((raw & (0x3 << 2)) >> 2);
        }
        /**
          Sets Input capture 1 prescaler
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setIC1PSC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((((value)) << 2) & (0x3 << 2));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare 1 selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC1S() volatile {
          return ((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Capture/Compare 1 selection
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setCC1S(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      capture/compare enable register
    */
    namespace CCER {
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
          Gets Capture/Compare 1 output Polarity
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1NP() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1NP(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare 1 complementary output enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1NE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Capture/Compare 1 complementary output enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1NE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1P() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1P(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Capture/Compare 1 output enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getCC1E() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Capture/Compare 1 output enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCC1E(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      counter
    */
    namespace CNT {
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
          Gets counter value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets counter value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setCNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      prescaler
    */
    namespace PSC {
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
          Gets Prescaler value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getPSC() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Prescaler value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setPSC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      auto-reload register
    */
    namespace ARR {
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
          Gets Auto-reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Auto-reload value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setARR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      repetition counter register
    */
    namespace RCR {
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
          Gets Repetition counter value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getREP() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Repetition counter value
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setREP(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      capture/compare register 1
    */
    namespace CCR1 {
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
          Gets Capture/Compare 1 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR1() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Capture/Compare 1 value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setCCR1(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      break and dead-time register
    */
    namespace BDTR {
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
          Gets Main output enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getMOE() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Main output enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMOE(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Automatic output enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getAOE() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Automatic output enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setAOE(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Break polarity
          @return boolean value
        */
        __attribute__((always_inline)) bool getBKP() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Break polarity
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBKP(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Break enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBKE() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Break enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBKE(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Off-state selection for Run mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSSR() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Off-state selection for Run mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSSR(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Off-state selection for Idle mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getOSSI() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets Off-state selection for Idle mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOSSI(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Lock configuration
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLOCK() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Lock configuration
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Dead-time generator setup
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDTG() volatile {
          return ((raw & (0xFF << 0)) >> 0);
        }
        /**
          Sets Dead-time generator setup
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setDTG(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((((value)) << 0) & (0xFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA control register
    */
    namespace DCR {
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
          Gets DMA burst length
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDBL() volatile {
          return ((raw & (0x1F << 8)) >> 8);
        }
        /**
          Sets DMA burst length
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDBL(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((((value)) << 8) & (0x1F << 8));
          return *(Register*)this;
        }
        /**
          Gets DMA base address
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDBA() volatile {
          return ((raw & (0x1F << 0)) >> 0);
        }
        /**
          Sets DMA base address
          @param value value in range 0..31
        */
        __attribute__((always_inline)) Register& setDBA(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((((value)) << 0) & (0x1F << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA address for full transfer
    */
    namespace DMAR {
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
          Gets DMA register for burst accesses
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDMAB() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets DMA register for burst accesses
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setDMAB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            control register 1
          */
          CR1::Register CR1;
        };
        struct {
          char _space_CR2[0x4];
          /**
            control register 2
          */
          CR2::Register CR2;
        };
        struct {
          char _space_DIER[0xc];
          /**
            DMA/Interrupt enable register
          */
          DIER::Register DIER;
        };
        struct {
          char _space_SR[0x10];
          /**
            status register
          */
          SR::Register SR;
        };
        struct {
          char _space_EGR[0x14];
          /**
            event generation register
          */
          EGR::Register EGR;
        };
        struct {
          char _space_CCMR1_Output[0x18];
          /**
            capture/compare mode register (output mode)
          */
          CCMR1_Output::Register CCMR1_Output;
        };
        struct {
          char _space_CCMR1_Input[0x18];
          /**
            capture/compare mode register 1 (input mode)
          */
          CCMR1_Input::Register CCMR1_Input;
        };
        struct {
          char _space_CCER[0x20];
          /**
            capture/compare enable register
          */
          CCER::Register CCER;
        };
        struct {
          char _space_CNT[0x24];
          /**
            counter
          */
          CNT::Register CNT;
        };
        struct {
          char _space_PSC[0x28];
          /**
            prescaler
          */
          PSC::Register PSC;
        };
        struct {
          char _space_ARR[0x2c];
          /**
            auto-reload register
          */
          ARR::Register ARR;
        };
        struct {
          char _space_RCR[0x30];
          /**
            repetition counter register
          */
          RCR::Register RCR;
        };
        struct {
          char _space_CCR1[0x34];
          /**
            capture/compare register 1
          */
          CCR1::Register CCR1;
        };
        struct {
          char _space_BDTR[0x44];
          /**
            break and dead-time register
          */
          BDTR::Register BDTR;
        };
        struct {
          char _space_DCR[0x48];
          /**
            DMA control register
          */
          DCR::Register DCR;
        };
        struct {
          char _space_DMAR[0x4c];
          /**
            DMA address for full transfer
          */
          DMAR::Register DMAR;
        };
      };
    };
  }
  
  extern volatile tim_16_17::Peripheral TIM16;
  extern volatile tim_16_17::Peripheral TIM17;
}