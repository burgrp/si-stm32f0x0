namespace target {
  namespace scb {
    
    /**
      CPUID base register
    */
    namespace CPUID {
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
          Gets Revision number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getRevision() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Revision number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setRevision(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Part number of the processor
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getPartNo() volatile {
          return ((raw & (0xFFF << 4)) >> 4);
        }
        /**
          Sets Part number of the processor
          @param value value in range 0..4095
        */
        __attribute__((always_inline)) Register& setPartNo(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 4)) | ((((value)) << 4) & (0xFFF << 4));
          return *(Register*)this;
        }
        /**
          Gets Reads as 0xF
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getConstant() volatile {
          return ((raw & (0xF << 16)) >> 16);
        }
        /**
          Sets Reads as 0xF
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setConstant(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((((value)) << 16) & (0xF << 16));
          return *(Register*)this;
        }
        /**
          Gets Variant number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getVariant() volatile {
          return ((raw & (0xF << 20)) >> 20);
        }
        /**
          Sets Variant number
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setVariant(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((((value)) << 20) & (0xF << 20));
          return *(Register*)this;
        }
        /**
          Gets Implementer code
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getImplementer() volatile {
          return ((raw & (0xFF << 24)) >> 24);
        }
        /**
          Sets Implementer code
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setImplementer(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((((value)) << 24) & (0xFF << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Interrupt control and state register
    */
    namespace ICSR {
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
          Gets Active vector
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getVECTACTIVE() volatile {
          return ((raw & (0x3F << 0)) >> 0);
        }
        /**
          Sets Active vector
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setVECTACTIVE(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((((value)) << 0) & (0x3F << 0));
          return *(Register*)this;
        }
        /**
          Gets Pending vector
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getVECTPENDING() volatile {
          return ((raw & (0x3F << 12)) >> 12);
        }
        /**
          Sets Pending vector
          @param value value in range 0..63
        */
        __attribute__((always_inline)) Register& setVECTPENDING(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 12)) | ((((value)) << 12) & (0x3F << 12));
          return *(Register*)this;
        }
        /**
          Gets Interrupt pending flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getISRPENDING() volatile {
          return ((raw & (0x1 << 22)) >> 22);
        }
        /**
          Sets Interrupt pending flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setISRPENDING(bool value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((((value)) << 22) & (0x1 << 22));
          return *(Register*)this;
        }
        /**
          Gets SysTick exception clear-pending bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getPENDSTCLR() volatile {
          return ((raw & (0x1 << 25)) >> 25);
        }
        /**
          Sets SysTick exception clear-pending bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPENDSTCLR(bool value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((((value)) << 25) & (0x1 << 25));
          return *(Register*)this;
        }
        /**
          Gets SysTick exception set-pending bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getPENDSTSET() volatile {
          return ((raw & (0x1 << 26)) >> 26);
        }
        /**
          Sets SysTick exception set-pending bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPENDSTSET(bool value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((((value)) << 26) & (0x1 << 26));
          return *(Register*)this;
        }
        /**
          Gets PendSV clear-pending bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getPENDSVCLR() volatile {
          return ((raw & (0x1 << 27)) >> 27);
        }
        /**
          Sets PendSV clear-pending bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPENDSVCLR(bool value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((((value)) << 27) & (0x1 << 27));
          return *(Register*)this;
        }
        /**
          Gets PendSV set-pending bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getPENDSVSET() volatile {
          return ((raw & (0x1 << 28)) >> 28);
        }
        /**
          Sets PendSV set-pending bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPENDSVSET(bool value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((((value)) << 28) & (0x1 << 28));
          return *(Register*)this;
        }
        /**
          Gets NMI set-pending bit.
          @return boolean value
        */
        __attribute__((always_inline)) bool getNMIPENDSET() volatile {
          return ((raw & (0x1 << 31)) >> 31);
        }
        /**
          Sets NMI set-pending bit.
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setNMIPENDSET(bool value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((((value)) << 31) & (0x1 << 31));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Application interrupt and reset control register
    */
    namespace AIRCR {
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
          Gets VECTCLRACTIVE
          @return boolean value
        */
        __attribute__((always_inline)) bool getVECTCLRACTIVE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets VECTCLRACTIVE
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setVECTCLRACTIVE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets SYSRESETREQ
          @return boolean value
        */
        __attribute__((always_inline)) bool getSYSRESETREQ() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets SYSRESETREQ
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSYSRESETREQ(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets ENDIANESS
          @return boolean value
        */
        __attribute__((always_inline)) bool getENDIANESS() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets ENDIANESS
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setENDIANESS(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
        /**
          Gets Register key
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getVECTKEYSTAT() volatile {
          return ((raw & (0xFFFF << 16)) >> 16);
        }
        /**
          Sets Register key
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setVECTKEYSTAT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((((value)) << 16) & (0xFFFF << 16));
          return *(Register*)this;
        }
      };
    };
    
    /**
      System control register
    */
    namespace SCR {
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
          Gets SLEEPONEXIT
          @return boolean value
        */
        __attribute__((always_inline)) bool getSLEEPONEXIT() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets SLEEPONEXIT
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSLEEPONEXIT(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets SLEEPDEEP
          @return boolean value
        */
        __attribute__((always_inline)) bool getSLEEPDEEP() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets SLEEPDEEP
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSLEEPDEEP(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Send Event on Pending bit
          @return boolean value
        */
        __attribute__((always_inline)) bool getSEVEONPEND() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Send Event on Pending bit
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSEVEONPEND(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Configuration and control register
    */
    namespace CCR {
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
          Gets UNALIGN_ TRP
          @return boolean value
        */
        __attribute__((always_inline)) bool getUNALIGN__TRP() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets UNALIGN_ TRP
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setUNALIGN__TRP(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets STKALIGN
          @return boolean value
        */
        __attribute__((always_inline)) bool getSTKALIGN() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets STKALIGN
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSTKALIGN(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
      };
    };
    
    /**
      System handler priority registers
    */
    namespace SHPR2 {
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
          Gets Priority of system handler 11
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_11() volatile {
          return ((raw & (0xFF << 24)) >> 24);
        }
        /**
          Sets Priority of system handler 11
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPRI_11(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((((value)) << 24) & (0xFF << 24));
          return *(Register*)this;
        }
      };
    };
    
    /**
      System handler priority registers
    */
    namespace SHPR3 {
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
          Gets Priority of system handler 14
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_14() volatile {
          return ((raw & (0xFF << 16)) >> 16);
        }
        /**
          Sets Priority of system handler 14
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPRI_14(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((((value)) << 16) & (0xFF << 16));
          return *(Register*)this;
        }
        /**
          Gets Priority of system handler 15
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_15() volatile {
          return ((raw & (0xFF << 24)) >> 24);
        }
        /**
          Sets Priority of system handler 15
          @param value value in range 0..255
        */
        __attribute__((always_inline)) Register& setPRI_15(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((((value)) << 24) & (0xFF << 24));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            CPUID base register
          */
          CPUID::Register CPUID;
        };
        struct {
          char _space_ICSR[0x4];
          /**
            Interrupt control and state register
          */
          ICSR::Register ICSR;
        };
        struct {
          char _space_AIRCR[0xc];
          /**
            Application interrupt and reset control register
          */
          AIRCR::Register AIRCR;
        };
        struct {
          char _space_SCR[0x10];
          /**
            System control register
          */
          SCR::Register SCR;
        };
        struct {
          char _space_CCR[0x14];
          /**
            Configuration and control register
          */
          CCR::Register CCR;
        };
        struct {
          char _space_SHPR2[0x1c];
          /**
            System handler priority registers
          */
          SHPR2::Register SHPR2;
        };
        struct {
          char _space_SHPR3[0x20];
          /**
            System handler priority registers
          */
          SHPR3::Register SHPR3;
        };
      };
    };
  }
  
  extern volatile scb::Peripheral SCB;
}