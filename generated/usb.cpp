namespace target {
  namespace usb {
    namespace reg {
      
      /**
        endpoint 0 register
      */
      class EP0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        endpoint 1 register
      */
      class EP1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        endpoint 2 register
      */
      class EP2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        endpoint 3 register
      */
      class EP3R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        endpoint 4 register
      */
      class EP4R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        endpoint 5 register
      */
      class EP5R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        endpoint 6 register
      */
      class EP6R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        endpoint 7 register
      */
      class EP7R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEA() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEA(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Status bits, for transmission transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_TX() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Status bits, for transmission transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_TX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Data Toggle, for transmission transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_TX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Data Toggle, for transmission transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Correct Transfer for transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_TX() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Correct Transfer for transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_TX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Endpoint kind
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEP_KIND() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Endpoint kind
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEP_KIND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Endpoint type
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEP_TYPE() volatile {
          return (raw & (0x3 << 9)) >> 9;
        }
        /**
          Sets Endpoint type
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEP_TYPE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 9)) | ((value << 9) & (0x3 << 9));
        }
        /**
          Gets Setup transaction completed
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETUP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Setup transaction completed
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Status bits, for reception transfers
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSTAT_RX() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Status bits, for reception transfers
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSTAT_RX(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Data Toggle, for reception transfers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDTOG_RX() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Data Toggle, for reception transfers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDTOG_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer for reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR_RX() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer for reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR_RX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        control register
      */
      class CNTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Force USB Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFRES() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Force USB Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFRES(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Power down
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPDWN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Power down
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPDWN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Low-power mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPMODE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Low-power mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPMODE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Force suspend
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFSUSP() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Force suspend
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Resume request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESUME() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Resume request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESUME(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets LPM L1 Resume request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getL1RESUME() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets LPM L1 Resume request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setL1RESUME(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets LPM L1 state request interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getL1REQM() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets LPM L1 state request interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setL1REQM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Expected start of frame interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getESOFM() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Expected start of frame interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setESOFM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Start of frame interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSOFM() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Start of frame interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSOFM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets USB reset interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESETM() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets USB reset interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESETM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Suspend mode interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSPM() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Suspend mode interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Wakeup interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWKUPM() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Wakeup interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWKUPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Error interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRM() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Error interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Packet memory area over / underrun interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPMAOVRM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Packet memory area over / underrun interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPMAOVRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer interrupt mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTRM() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer interrupt mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTRM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        interrupt status register
      */
      class ISTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Endpoint Identifier
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getEP_ID() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Endpoint Identifier
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setEP_ID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Direction of transaction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Direction of transaction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets LPM L1 state request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getL1REQ() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets LPM L1 state request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setL1REQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Expected start frame
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getESOF() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Expected start frame
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setESOF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets start of frame
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSOF() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets start of frame
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSOF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets reset request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESET() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets reset request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Suspend mode request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUSP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Suspend mode request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUSP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Wakeup
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWKUP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Wakeup
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWKUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERR() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Packet memory area over / underrun
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPMAOVR() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Packet memory area over / underrun
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPMAOVR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Correct transfer
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTR() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Correct transfer
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        frame number register
      */
      class FNR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Frame number
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getFN() volatile {
          return (raw & (0x7FF << 0)) >> 0;
        }
        /**
          Sets Frame number
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setFN(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 0)) | ((value << 0) & (0x7FF << 0));
        }
        /**
          Gets Lost SOF
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLSOF() volatile {
          return (raw & (0x3 << 11)) >> 11;
        }
        /**
          Sets Lost SOF
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setLSOF(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((value << 11) & (0x3 << 11));
        }
        /**
          Gets Locked
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLCK() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Locked
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLCK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Receive data - line status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXDM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Receive data - line status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXDM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Receive data + line status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXDP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Receive data + line status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXDP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
      };
      
      /**
        device address
      */
      class DADDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Device address
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getADD() volatile {
          return (raw & (0x7F << 0)) >> 0;
        }
        /**
          Sets Device address
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setADD(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 0)) | ((value << 0) & (0x7F << 0));
        }
        /**
          Gets Enable function
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEF() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Enable function
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
      };
      
      /**
        Buffer table address
      */
      class BTABLE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Buffer table
          @return value in range 0..8191
        */
        __attribute__((always_inline)) unsigned long getBTABLE() volatile {
          return (raw & (0x1FFF << 3)) >> 3;
        }
        /**
          Sets Buffer table
          @param value in range 0..8191
        */
        __attribute__((always_inline)) unsigned long setBTABLE(unsigned long value) volatile {
          raw = (raw & ~(0x1FFF << 3)) | ((value << 3) & (0x1FFF << 3));
        }
      };
      
      /**
        LPM control and status register
      */
      class LPMCSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets LPM support enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPMEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets LPM support enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPMEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets LPM Token acknowledge enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPMACK() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets LPM Token acknowledge enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPMACK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets bRemoteWake value
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREMWAKE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets bRemoteWake value
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREMWAKE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets BESL value
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getBESL() volatile {
          return (raw & (0xF << 4)) >> 4;
        }
        /**
          Sets BESL value
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setBESL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 4)) | ((value << 4) & (0xF << 4));
        }
      };
      
      /**
        Battery charging detector
      */
      class BCDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Battery charging detector (BCD) enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBCDEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Battery charging detector (BCD) enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBCDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Data contact detection (DCD) mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDCDEN() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Data contact detection (DCD) mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDCDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Primary detection (PD) mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPDEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Primary detection (PD) mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Secondary detection (SD) mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSDEN() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Secondary detection (SD) mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data contact detection (DCD) status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDCDET() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data contact detection (DCD) status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDCDET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Primary detection (PD) status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPDET() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Primary detection (PD) status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPDET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Secondary detection (SD) status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSDET() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Secondary detection (SD) status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSDET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets DM pull-up detection status
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPS2DET() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets DM pull-up detection status
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPS2DET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets DP pull-up control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDPPU() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets DP pull-up control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDPPU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
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
          volatile reg::EP0R EP0R;
        };
        struct {
          volatile char _space_EP1R[4];
          /**
            endpoint 1 register
          */
          volatile reg::EP1R EP1R;
        };
        struct {
          volatile char _space_EP2R[8];
          /**
            endpoint 2 register
          */
          volatile reg::EP2R EP2R;
        };
        struct {
          volatile char _space_EP3R[12];
          /**
            endpoint 3 register
          */
          volatile reg::EP3R EP3R;
        };
        struct {
          volatile char _space_EP4R[16];
          /**
            endpoint 4 register
          */
          volatile reg::EP4R EP4R;
        };
        struct {
          volatile char _space_EP5R[20];
          /**
            endpoint 5 register
          */
          volatile reg::EP5R EP5R;
        };
        struct {
          volatile char _space_EP6R[24];
          /**
            endpoint 6 register
          */
          volatile reg::EP6R EP6R;
        };
        struct {
          volatile char _space_EP7R[28];
          /**
            endpoint 7 register
          */
          volatile reg::EP7R EP7R;
        };
        struct {
          volatile char _space_CNTR[64];
          /**
            control register
          */
          volatile reg::CNTR CNTR;
        };
        struct {
          volatile char _space_ISTR[68];
          /**
            interrupt status register
          */
          volatile reg::ISTR ISTR;
        };
        struct {
          volatile char _space_FNR[72];
          /**
            frame number register
          */
          volatile reg::FNR FNR;
        };
        struct {
          volatile char _space_DADDR[76];
          /**
            device address
          */
          volatile reg::DADDR DADDR;
        };
        struct {
          volatile char _space_BTABLE[80];
          /**
            Buffer table address
          */
          volatile reg::BTABLE BTABLE;
        };
        struct {
          volatile char _space_LPMCSR[84];
          /**
            LPM control and status register
          */
          volatile reg::LPMCSR LPMCSR;
        };
        struct {
          volatile char _space_BCDR[88];
          /**
            Battery charging detector
          */
          volatile reg::BCDR BCDR;
        };
      };
    };
  }
  
  extern usb::Peripheral USB;
}