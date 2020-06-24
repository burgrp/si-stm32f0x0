namespace target {
  namespace usb {
    
    /**
      endpoint 0 register
    */
    namespace EP0R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      endpoint 1 register
    */
    namespace EP1R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      endpoint 2 register
    */
    namespace EP2R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      endpoint 3 register
    */
    namespace EP3R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      endpoint 4 register
    */
    namespace EP4R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      endpoint 5 register
    */
    namespace EP5R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      endpoint 6 register
    */
    namespace EP6R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      endpoint 7 register
    */
    namespace EP7R {
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
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint address
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return ((raw & (0x3 << 4)) >> 4);
        }
        /**
          Sets Status bits, for transmission transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((((value)) << 4) & (0x3 << 4));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_TX() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Correct Transfer for transmission
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_TX() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Correct Transfer for transmission
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_TX(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Endpoint kind
          @return boolean value
        */
        __attribute__((always_inline)) bool getEP_KIND() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Endpoint kind
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEP_KIND(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return ((raw & (0x3 << 9)) >> 9);
        }
        /**
          Sets Endpoint type
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((((value)) << 9) & (0x3 << 9));
          return *(Register*)this;
        }
        /**
          Gets Setup transaction completed
          @return boolean value
        */
        __attribute__((always_inline)) bool getSETUP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Setup transaction completed
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSETUP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Status bits, for reception transfers
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Data Toggle, for reception transfers
          @return boolean value
        */
        __attribute__((always_inline)) bool getDTOG_RX() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDTOG_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer for reception
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR_RX() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer for reception
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR_RX(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      control register
    */
    namespace CNTR {
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
          Gets Force USB Reset
          @return boolean value
        */
        __attribute__((always_inline)) bool getFRES() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Force USB Reset
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFRES(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Power down
          @return boolean value
        */
        __attribute__((always_inline)) bool getPDWN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Power down
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPDWN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Low-power mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getLPMODE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Low-power mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLPMODE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Force suspend
          @return boolean value
        */
        __attribute__((always_inline)) bool getFSUSP() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Force suspend
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setFSUSP(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Resume request
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESUME() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Resume request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESUME(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets LPM L1 Resume request
          @return boolean value
        */
        __attribute__((always_inline)) bool getL1RESUME() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets LPM L1 Resume request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setL1RESUME(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets LPM L1 state request interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getL1REQM() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets LPM L1 state request interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setL1REQM(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Expected start of frame interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getESOFM() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Expected start of frame interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setESOFM(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Start of frame interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getSOFM() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets Start of frame interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSOFM(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets USB reset interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESETM() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets USB reset interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESETM(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Suspend mode interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getSUSPM() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Suspend mode interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSUSPM(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Wakeup interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getWKUPM() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Wakeup interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWKUPM(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Error interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getERRM() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Error interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERRM(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Packet memory area over / underrun interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getPMAOVRM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Packet memory area over / underrun interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPMAOVRM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer interrupt mask
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTRM() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer interrupt mask
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTRM(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      interrupt status register
    */
    namespace ISTR {
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
          Gets Endpoint Identifier
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEP_ID() volatile {
          return ((raw & (0xF << 0)) >> 0);
        }
        /**
          Sets Endpoint Identifier
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setEP_ID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((((value)) << 0) & (0xF << 0));
          return *(Register*)this;
        }
        /**
          Gets Direction of transaction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Direction of transaction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets LPM L1 state request
          @return boolean value
        */
        __attribute__((always_inline)) bool getL1REQ() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets LPM L1 state request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setL1REQ(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Expected start frame
          @return boolean value
        */
        __attribute__((always_inline)) bool getESOF() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Expected start frame
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setESOF(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets start of frame
          @return boolean value
        */
        __attribute__((always_inline)) bool getSOF() volatile {
          return ((raw & (0x1 << 9)) >> 9);
        }
        /**
          Sets start of frame
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSOF(bool value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((((value)) << 9) & (0x1 << 9));
          return *(Register*)this;
        }
        /**
          Gets reset request
          @return boolean value
        */
        __attribute__((always_inline)) bool getRESET() volatile {
          return ((raw & (0x1 << 10)) >> 10);
        }
        /**
          Sets reset request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRESET(bool value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((((value)) << 10) & (0x1 << 10));
          return *(Register*)this;
        }
        /**
          Gets Suspend mode request
          @return boolean value
        */
        __attribute__((always_inline)) bool getSUSP() volatile {
          return ((raw & (0x1 << 11)) >> 11);
        }
        /**
          Sets Suspend mode request
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSUSP(bool value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((((value)) << 11) & (0x1 << 11));
          return *(Register*)this;
        }
        /**
          Gets Wakeup
          @return boolean value
        */
        __attribute__((always_inline)) bool getWKUP() volatile {
          return ((raw & (0x1 << 12)) >> 12);
        }
        /**
          Sets Wakeup
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWKUP(bool value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((((value)) << 12) & (0x1 << 12));
          return *(Register*)this;
        }
        /**
          Gets Error
          @return boolean value
        */
        __attribute__((always_inline)) bool getERR() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Error
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setERR(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Packet memory area over / underrun
          @return boolean value
        */
        __attribute__((always_inline)) bool getPMAOVR() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Packet memory area over / underrun
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPMAOVR(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Correct transfer
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTR() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Correct transfer
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTR(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      frame number register
    */
    namespace FNR {
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
          Gets Frame number
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getFN() volatile {
          return ((raw & (0x7FF << 0)) >> 0);
        }
        /**
          Sets Frame number
          @param value value in range 0..2047
        */
        __attribute__((always_inline)) Register& setFN(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 0)) | ((((value)) << 0) & (0x7FF << 0));
          return *(Register*)this;
        }
        /**
          Gets Lost SOF
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLSOF() volatile {
          return ((raw & (0x3 << 11)) >> 11);
        }
        /**
          Sets Lost SOF
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setLSOF(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((((value)) << 11) & (0x3 << 11));
          return *(Register*)this;
        }
        /**
          Gets Locked
          @return boolean value
        */
        __attribute__((always_inline)) bool getLCK() volatile {
          return ((raw & (0x1 << 13)) >> 13);
        }
        /**
          Sets Locked
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLCK(bool value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((((value)) << 13) & (0x1 << 13));
          return *(Register*)this;
        }
        /**
          Gets Receive data - line status
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXDM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Receive data - line status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXDM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
        /**
          Gets Receive data + line status
          @return boolean value
        */
        __attribute__((always_inline)) bool getRXDP() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets Receive data + line status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setRXDP(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    
    /**
      device address
    */
    namespace DADDR {
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
          Gets Device address
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getADD() volatile {
          return ((raw & (0x7F << 0)) >> 0);
        }
        /**
          Sets Device address
          @param value value in range 0..127
        */
        __attribute__((always_inline)) Register& setADD(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((((value)) << 0) & (0x7F << 0));
          return *(Register*)this;
        }
        /**
          Gets Enable function
          @return boolean value
        */
        __attribute__((always_inline)) bool getEF() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Enable function
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEF(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Buffer table address
    */
    namespace BTABLE {
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
          Gets Buffer table
          @return value in range 0..8191
        */
        __attribute__((always_inline)) unsigned long getBTABLE() volatile {
          return ((raw & (0x1FFF << 3)) >> 3);
        }
        /**
          Sets Buffer table
          @param value value in range 0..8191
        */
        __attribute__((always_inline)) Register& setBTABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1FFF << 3)) | ((((value)) << 3) & (0x1FFF << 3));
          return *(Register*)this;
        }
      };
    };
    
    /**
      LPM control and status register
    */
    namespace LPMCSR {
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
          Gets LPM support enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLPMEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets LPM support enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLPMEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets LPM Token acknowledge enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getLPMACK() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets LPM Token acknowledge enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLPMACK(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets bRemoteWake value
          @return boolean value
        */
        __attribute__((always_inline)) bool getREMWAKE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets bRemoteWake value
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setREMWAKE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets BESL value
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getBESL() volatile {
          return ((raw & (0xF << 4)) >> 4);
        }
        /**
          Sets BESL value
          @param value value in range 0..15
        */
        __attribute__((always_inline)) Register& setBESL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((((value)) << 4) & (0xF << 4));
          return *(Register*)this;
        }
      };
    };
    
    /**
      Battery charging detector
    */
    namespace BCDR {
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
          Gets Battery charging detector (BCD) enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getBCDEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Battery charging detector (BCD) enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setBCDEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Data contact detection (DCD) mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getDCDEN() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Data contact detection (DCD) mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDCDEN(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Primary detection (PD) mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getPDEN() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Primary detection (PD) mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPDEN(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Secondary detection (SD) mode enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getSDEN() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Secondary detection (SD) mode enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSDEN(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data contact detection (DCD) status
          @return boolean value
        */
        __attribute__((always_inline)) bool getDCDET() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data contact detection (DCD) status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDCDET(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Primary detection (PD) status
          @return boolean value
        */
        __attribute__((always_inline)) bool getPDET() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Primary detection (PD) status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPDET(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Secondary detection (SD) status
          @return boolean value
        */
        __attribute__((always_inline)) bool getSDET() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Secondary detection (SD) status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSDET(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets DM pull-up detection status
          @return boolean value
        */
        __attribute__((always_inline)) bool getPS2DET() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets DM pull-up detection status
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPS2DET(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets DP pull-up control
          @return boolean value
        */
        __attribute__((always_inline)) bool getDPPU() volatile {
          return ((raw & (0x1 << 15)) >> 15);
        }
        /**
          Sets DP pull-up control
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDPPU(bool value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((((value)) << 15) & (0x1 << 15));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            endpoint 0 register
          */
          EP0R::Register EP0R;
        };
        struct {
          char _space_EP1R[0x4];
          /**
            endpoint 1 register
          */
          EP1R::Register EP1R;
        };
        struct {
          char _space_EP2R[0x8];
          /**
            endpoint 2 register
          */
          EP2R::Register EP2R;
        };
        struct {
          char _space_EP3R[0xc];
          /**
            endpoint 3 register
          */
          EP3R::Register EP3R;
        };
        struct {
          char _space_EP4R[0x10];
          /**
            endpoint 4 register
          */
          EP4R::Register EP4R;
        };
        struct {
          char _space_EP5R[0x14];
          /**
            endpoint 5 register
          */
          EP5R::Register EP5R;
        };
        struct {
          char _space_EP6R[0x18];
          /**
            endpoint 6 register
          */
          EP6R::Register EP6R;
        };
        struct {
          char _space_EP7R[0x1c];
          /**
            endpoint 7 register
          */
          EP7R::Register EP7R;
        };
        struct {
          char _space_CNTR[0x40];
          /**
            control register
          */
          CNTR::Register CNTR;
        };
        struct {
          char _space_ISTR[0x44];
          /**
            interrupt status register
          */
          ISTR::Register ISTR;
        };
        struct {
          char _space_FNR[0x48];
          /**
            frame number register
          */
          FNR::Register FNR;
        };
        struct {
          char _space_DADDR[0x4c];
          /**
            device address
          */
          DADDR::Register DADDR;
        };
        struct {
          char _space_BTABLE[0x50];
          /**
            Buffer table address
          */
          BTABLE::Register BTABLE;
        };
        struct {
          char _space_LPMCSR[0x54];
          /**
            LPM control and status register
          */
          LPMCSR::Register LPMCSR;
        };
        struct {
          char _space_BCDR[0x58];
          /**
            Battery charging detector
          */
          BCDR::Register BCDR;
        };
      };
    };
  }
  
  extern volatile usb::Peripheral USB;
}