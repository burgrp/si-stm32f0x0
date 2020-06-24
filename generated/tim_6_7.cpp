namespace target {
  namespace tim_6_7 {
    
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
          Gets Master mode selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMMS() volatile {
          return ((raw & (0x7 << 4)) >> 4);
        }
        /**
          Sets Master mode selection
          @param value value in range 0..7
        */
        __attribute__((always_inline)) Register& setMMS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((((value)) << 4) & (0x7 << 4));
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
          Gets Low counter value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Low counter value
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
          Gets Low Auto-reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Low Auto-reload value
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setARR(unsigned long value) volatile {
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
      };
    };
  }
  
  extern volatile tim_6_7::Peripheral TIM6;
  extern volatile tim_6_7::Peripheral TIM7;
}