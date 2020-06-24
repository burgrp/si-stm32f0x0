namespace target {
  namespace dma {
    
    /**
      DMA interrupt status register (DMA_ISR)
    */
    namespace ISR {
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
          Gets Channel 1 Global interrupt flag
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getGIF(int index) volatile {
          return ((raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Global interrupt flag
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setGIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((((value)) << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Channel 1 Transfer Complete flag
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIF(int index) volatile {
          return ((raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Transfer Complete flag
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((((value)) << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Channel 1 Half Transfer Complete flag
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIF(int index) volatile {
          return ((raw & (0x1 << (2 + 4 * (index - 1)))) >> (2 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Half Transfer Complete flag
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (2 + 4 * (index - 1)))) | ((((value)) << (2 + 4 * (index - 1))) & (0x1 << (2 + 4 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Channel 1 Transfer Error flag
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIF(int index) volatile {
          return ((raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Transfer Error flag
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((((value)) << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA interrupt flag clear register (DMA_IFCR)
    */
    namespace IFCR {
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
          Gets Channel 1 Global interrupt clear
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getCGIF(int index) volatile {
          return ((raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Global interrupt clear
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCGIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((((value)) << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Channel 1 Transfer Complete clear
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTCIF(int index) volatile {
          return ((raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Transfer Complete clear
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTCIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((((value)) << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Channel 1 Half Transfer clear
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getCHTIF(int index) volatile {
          return ((raw & (0x1 << (2 + 4 * (index - 1)))) >> (2 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Half Transfer clear
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCHTIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (2 + 4 * (index - 1)))) | ((((value)) << (2 + 4 * (index - 1))) & (0x1 << (2 + 4 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Channel 1 Transfer Error clear
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getCTEIF(int index) volatile {
          return ((raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1)));
        }
        /**
          Sets Channel 1 Transfer Error clear
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCTEIF(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((((value)) << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel configuration register (DMA_CCR)
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
          Gets Channel enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transfer complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Half Transfer interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Half Transfer interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transfer error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transfer error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data transfer direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data transfer direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIRC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Circular mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIRC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Peripheral increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Peripheral increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Memory increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMINC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Memory increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMINC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Peripheral size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Memory size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Channel Priority level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Memory to memory mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMEM2MEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Memory to memory mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMEM2MEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 1 number of data register
    */
    namespace CNDTR1 {
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
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Number of data to transfer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 1 peripheral address register
    */
    namespace CPAR1 {
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
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Peripheral address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 1 memory address register
    */
    namespace CMAR1 {
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
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Memory address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel configuration register (DMA_CCR)
    */
    namespace CCR2 {
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
          Gets Channel enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transfer complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Half Transfer interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Half Transfer interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transfer error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transfer error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data transfer direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data transfer direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIRC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Circular mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIRC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Peripheral increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Peripheral increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Memory increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMINC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Memory increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMINC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Peripheral size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Memory size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Channel Priority level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Memory to memory mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMEM2MEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Memory to memory mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMEM2MEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 2 number of data register
    */
    namespace CNDTR2 {
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
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Number of data to transfer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 2 peripheral address register
    */
    namespace CPAR2 {
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
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Peripheral address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 2 memory address register
    */
    namespace CMAR2 {
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
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Memory address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel configuration register (DMA_CCR)
    */
    namespace CCR3 {
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
          Gets Channel enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transfer complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Half Transfer interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Half Transfer interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transfer error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transfer error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data transfer direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data transfer direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIRC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Circular mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIRC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Peripheral increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Peripheral increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Memory increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMINC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Memory increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMINC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Peripheral size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Memory size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Channel Priority level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Memory to memory mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMEM2MEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Memory to memory mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMEM2MEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 3 number of data register
    */
    namespace CNDTR3 {
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
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Number of data to transfer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 3 peripheral address register
    */
    namespace CPAR3 {
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
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Peripheral address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 3 memory address register
    */
    namespace CMAR3 {
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
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Memory address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel configuration register (DMA_CCR)
    */
    namespace CCR4 {
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
          Gets Channel enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transfer complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Half Transfer interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Half Transfer interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transfer error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transfer error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data transfer direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data transfer direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIRC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Circular mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIRC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Peripheral increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Peripheral increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Memory increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMINC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Memory increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMINC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Peripheral size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Memory size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Channel Priority level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Memory to memory mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMEM2MEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Memory to memory mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMEM2MEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 4 number of data register
    */
    namespace CNDTR4 {
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
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Number of data to transfer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 4 peripheral address register
    */
    namespace CPAR4 {
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
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Peripheral address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 4 memory address register
    */
    namespace CMAR4 {
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
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Memory address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel configuration register (DMA_CCR)
    */
    namespace CCR5 {
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
          Gets Channel enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transfer complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Half Transfer interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Half Transfer interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transfer error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transfer error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data transfer direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data transfer direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIRC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Circular mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIRC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Peripheral increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Peripheral increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Memory increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMINC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Memory increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMINC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Peripheral size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Memory size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Channel Priority level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Memory to memory mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMEM2MEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Memory to memory mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMEM2MEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 5 number of data register
    */
    namespace CNDTR5 {
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
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Number of data to transfer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 5 peripheral address register
    */
    namespace CPAR5 {
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
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Peripheral address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 5 memory address register
    */
    namespace CMAR5 {
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
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Memory address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel configuration register (DMA_CCR)
    */
    namespace CCR6 {
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
          Gets Channel enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transfer complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Half Transfer interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Half Transfer interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transfer error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transfer error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data transfer direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data transfer direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIRC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Circular mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIRC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Peripheral increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Peripheral increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Memory increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMINC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Memory increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMINC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Peripheral size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Memory size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Channel Priority level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Memory to memory mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMEM2MEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Memory to memory mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMEM2MEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 6 number of data register
    */
    namespace CNDTR6 {
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
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Number of data to transfer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 6 peripheral address register
    */
    namespace CPAR6 {
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
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Peripheral address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 6 memory address register
    */
    namespace CMAR6 {
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
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Memory address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel configuration register (DMA_CCR)
    */
    namespace CCR7 {
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
          Gets Channel enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getEN() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Channel enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEN(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Transfer complete interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTCIE() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Transfer complete interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTCIE(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Half Transfer interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getHTIE() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Half Transfer interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setHTIE(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Transfer error interrupt enable
          @return boolean value
        */
        __attribute__((always_inline)) bool getTEIE() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Transfer error interrupt enable
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setTEIE(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Data transfer direction
          @return boolean value
        */
        __attribute__((always_inline)) bool getDIR() volatile {
          return ((raw & (0x1 << 4)) >> 4);
        }
        /**
          Sets Data transfer direction
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDIR(bool value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((((value)) << 4) & (0x1 << 4));
          return *(Register*)this;
        }
        /**
          Gets Circular mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getCIRC() volatile {
          return ((raw & (0x1 << 5)) >> 5);
        }
        /**
          Sets Circular mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCIRC(bool value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((((value)) << 5) & (0x1 << 5));
          return *(Register*)this;
        }
        /**
          Gets Peripheral increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getPINC() volatile {
          return ((raw & (0x1 << 6)) >> 6);
        }
        /**
          Sets Peripheral increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPINC(bool value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((((value)) << 6) & (0x1 << 6));
          return *(Register*)this;
        }
        /**
          Gets Memory increment mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMINC() volatile {
          return ((raw & (0x1 << 7)) >> 7);
        }
        /**
          Sets Memory increment mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMINC(bool value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((((value)) << 7) & (0x1 << 7));
          return *(Register*)this;
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return ((raw & (0x3 << 8)) >> 8);
        }
        /**
          Sets Peripheral size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((((value)) << 8) & (0x3 << 8));
          return *(Register*)this;
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return ((raw & (0x3 << 10)) >> 10);
        }
        /**
          Sets Memory size
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((((value)) << 10) & (0x3 << 10));
          return *(Register*)this;
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return ((raw & (0x3 << 12)) >> 12);
        }
        /**
          Sets Channel Priority level
          @param value value in range 0..3
        */
        __attribute__((always_inline)) Register& setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((((value)) << 12) & (0x3 << 12));
          return *(Register*)this;
        }
        /**
          Gets Memory to memory mode
          @return boolean value
        */
        __attribute__((always_inline)) bool getMEM2MEM() volatile {
          return ((raw & (0x1 << 14)) >> 14);
        }
        /**
          Sets Memory to memory mode
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setMEM2MEM(bool value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((((value)) << 14) & (0x1 << 14));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 7 number of data register
    */
    namespace CNDTR7 {
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
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return ((raw & (0xFFFF << 0)) >> 0);
        }
        /**
          Sets Number of data to transfer
          @param value value in range 0..65535
        */
        __attribute__((always_inline)) Register& setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((((value)) << 0) & (0xFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 7 peripheral address register
    */
    namespace CPAR7 {
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
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Peripheral address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      DMA channel 7 memory address register
    */
    namespace CMAR7 {
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
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return ((raw & (0xFFFFFFFF << 0)) >> 0);
        }
        /**
          Sets Memory address
          @param value value in range 0..4294967295
        */
        __attribute__((always_inline)) Register& setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((((value)) << 0) & (0xFFFFFFFF << 0));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            DMA interrupt status register (DMA_ISR)
          */
          ISR::Register ISR;
        };
        struct {
          char _space_IFCR[0x4];
          /**
            DMA interrupt flag clear register (DMA_IFCR)
          */
          IFCR::Register IFCR;
        };
        struct {
          char _space_CCR1[0x8];
          /**
            DMA channel configuration register (DMA_CCR)
          */
          CCR1::Register CCR1;
        };
        struct {
          char _space_CNDTR1[0xc];
          /**
            DMA channel 1 number of data register
          */
          CNDTR1::Register CNDTR1;
        };
        struct {
          char _space_CPAR1[0x10];
          /**
            DMA channel 1 peripheral address register
          */
          CPAR1::Register CPAR1;
        };
        struct {
          char _space_CMAR1[0x14];
          /**
            DMA channel 1 memory address register
          */
          CMAR1::Register CMAR1;
        };
        struct {
          char _space_CCR2[0x1c];
          /**
            DMA channel configuration register (DMA_CCR)
          */
          CCR2::Register CCR2;
        };
        struct {
          char _space_CNDTR2[0x20];
          /**
            DMA channel 2 number of data register
          */
          CNDTR2::Register CNDTR2;
        };
        struct {
          char _space_CPAR2[0x24];
          /**
            DMA channel 2 peripheral address register
          */
          CPAR2::Register CPAR2;
        };
        struct {
          char _space_CMAR2[0x28];
          /**
            DMA channel 2 memory address register
          */
          CMAR2::Register CMAR2;
        };
        struct {
          char _space_CCR3[0x30];
          /**
            DMA channel configuration register (DMA_CCR)
          */
          CCR3::Register CCR3;
        };
        struct {
          char _space_CNDTR3[0x34];
          /**
            DMA channel 3 number of data register
          */
          CNDTR3::Register CNDTR3;
        };
        struct {
          char _space_CPAR3[0x38];
          /**
            DMA channel 3 peripheral address register
          */
          CPAR3::Register CPAR3;
        };
        struct {
          char _space_CMAR3[0x3c];
          /**
            DMA channel 3 memory address register
          */
          CMAR3::Register CMAR3;
        };
        struct {
          char _space_CCR4[0x44];
          /**
            DMA channel configuration register (DMA_CCR)
          */
          CCR4::Register CCR4;
        };
        struct {
          char _space_CNDTR4[0x48];
          /**
            DMA channel 4 number of data register
          */
          CNDTR4::Register CNDTR4;
        };
        struct {
          char _space_CPAR4[0x4c];
          /**
            DMA channel 4 peripheral address register
          */
          CPAR4::Register CPAR4;
        };
        struct {
          char _space_CMAR4[0x50];
          /**
            DMA channel 4 memory address register
          */
          CMAR4::Register CMAR4;
        };
        struct {
          char _space_CCR5[0x58];
          /**
            DMA channel configuration register (DMA_CCR)
          */
          CCR5::Register CCR5;
        };
        struct {
          char _space_CNDTR5[0x5c];
          /**
            DMA channel 5 number of data register
          */
          CNDTR5::Register CNDTR5;
        };
        struct {
          char _space_CPAR5[0x60];
          /**
            DMA channel 5 peripheral address register
          */
          CPAR5::Register CPAR5;
        };
        struct {
          char _space_CMAR5[0x64];
          /**
            DMA channel 5 memory address register
          */
          CMAR5::Register CMAR5;
        };
        struct {
          char _space_CCR6[0x6c];
          /**
            DMA channel configuration register (DMA_CCR)
          */
          CCR6::Register CCR6;
        };
        struct {
          char _space_CNDTR6[0x70];
          /**
            DMA channel 6 number of data register
          */
          CNDTR6::Register CNDTR6;
        };
        struct {
          char _space_CPAR6[0x74];
          /**
            DMA channel 6 peripheral address register
          */
          CPAR6::Register CPAR6;
        };
        struct {
          char _space_CMAR6[0x78];
          /**
            DMA channel 6 memory address register
          */
          CMAR6::Register CMAR6;
        };
        struct {
          char _space_CCR7[0x80];
          /**
            DMA channel configuration register (DMA_CCR)
          */
          CCR7::Register CCR7;
        };
        struct {
          char _space_CNDTR7[0x84];
          /**
            DMA channel 7 number of data register
          */
          CNDTR7::Register CNDTR7;
        };
        struct {
          char _space_CPAR7[0x88];
          /**
            DMA channel 7 peripheral address register
          */
          CPAR7::Register CPAR7;
        };
        struct {
          char _space_CMAR7[0x8c];
          /**
            DMA channel 7 memory address register
          */
          CMAR7::Register CMAR7;
        };
      };
    };
  }
  
  extern volatile dma::Peripheral DMA1;
}