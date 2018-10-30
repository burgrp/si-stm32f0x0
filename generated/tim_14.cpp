namespace target {
  namespace tim_14 {
    namespace reg {
      
      /**
        control register 1
      */
      class CR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock division
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCKD() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Clock division
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCKD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Auto-reload preload enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARPE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Auto-reload preload enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Update request source
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getURS() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Update request source
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setURS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Update disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUDIS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Update disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Counter enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Counter enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        DMA/Interrupt enable register
      */
      class DIER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1IE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Capture/Compare 1 interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1IE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Update interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        status register
      */
      class SR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 overcapture flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1OF() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Capture/Compare 1 overcapture flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1OF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Capture/compare 1 interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1IF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Capture/compare 1 interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1IF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Update interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUIF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        event generation register
      */
      class EGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/compare 1 generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1G() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Capture/compare 1 generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1G(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Update generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUG() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        capture/compare mode register (output mode)
      */
      class CCMR1_Output {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC1S() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC1S(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Output compare 1 fast enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC1FE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Output compare 1 fast enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC1FE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Output Compare 1 preload enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC1PE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Output Compare 1 preload enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC1PE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Output Compare 1 mode
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOC1M() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Output Compare 1 mode
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setOC1M(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
      };
      
      /**
        capture/compare mode register (input mode)
      */
      class CCMR1_Input {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Input capture 1 filter
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getIC1F() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets Input capture 1 filter
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setIC1F(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
        /**
          Gets Input capture 1 prescaler
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIC1PSC() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets Input capture 1 prescaler
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setIC1PSC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets Capture/Compare 1 selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC1S() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC1S(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        capture/compare enable register
      */
      class CCER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1NP() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1NP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1P() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1P(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Capture/Compare 1 output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1E() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1E(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        counter
      */
      class CNT {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets counter value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets counter value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        prescaler
      */
      class PSC {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Prescaler value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getPSC() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Prescaler value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setPSC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        auto-reload register
      */
      class ARR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Auto-reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Auto-reload value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setARR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        capture/compare register 1
      */
      class CCR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR1() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR1(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        option register
      */
      class OR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Timer input 1 remap
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getRMP() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Timer input 1 remap
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setRMP(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
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
          volatile reg::CR1 CR1;
        };
        struct {
          volatile char _space_DIER[12];
          /**
            DMA/Interrupt enable register
          */
          volatile reg::DIER DIER;
        };
        struct {
          volatile char _space_SR[16];
          /**
            status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_EGR[20];
          /**
            event generation register
          */
          volatile reg::EGR EGR;
        };
        struct {
          volatile char _space_CCMR1_Output[24];
          /**
            capture/compare mode register (output mode)
          */
          volatile reg::CCMR1_Output CCMR1_Output;
        };
        struct {
          volatile char _space_CCMR1_Input[24];
          /**
            capture/compare mode register (input mode)
          */
          volatile reg::CCMR1_Input CCMR1_Input;
        };
        struct {
          volatile char _space_CCER[32];
          /**
            capture/compare enable register
          */
          volatile reg::CCER CCER;
        };
        struct {
          volatile char _space_CNT[36];
          /**
            counter
          */
          volatile reg::CNT CNT;
        };
        struct {
          volatile char _space_PSC[40];
          /**
            prescaler
          */
          volatile reg::PSC PSC;
        };
        struct {
          volatile char _space_ARR[44];
          /**
            auto-reload register
          */
          volatile reg::ARR ARR;
        };
        struct {
          volatile char _space_CCR1[52];
          /**
            capture/compare register 1
          */
          volatile reg::CCR1 CCR1;
        };
        struct {
          volatile char _space_OR[80];
          /**
            option register
          */
          volatile reg::OR OR;
        };
      };
    };
  }
  
  extern tim_14::Peripheral TIM14;
}