namespace target {
  namespace tim_14 {
    
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
        /**
          Gets Output compare 1 fast enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getOC1FE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Output compare 1 fast enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setOC1FE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
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
      };
    };
    
    /**
      capture/compare mode register (input mode)
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
      option register
    */
    namespace OR {
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
          Gets Timer input 1 remap
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRMP() volatile {
          return ((raw & (0x3 << 0)) >> 0);
        }
        /**
          Sets Timer input 1 remap
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setRMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((((value)) << 0) & (0x3 << 0));
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
            capture/compare mode register (input mode)
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
          char _space_CCR1[0x34];
          /**
            capture/compare register 1
          */
          CCR1::Register CCR1;
        };
        struct {
          char _space_OR[0x50];
          /**
            option register
          */
          OR::Register OR;
        };
      };
    };
  }
  
  extern volatile tim_14::Peripheral TIM14;
}