include config.mk

PROJ_UNITS_SUB_HEADERS		= $(shell find ./src/units/rdmn-attachments/ -mindepth 2 -maxdepth 2 -type f -name "*.h")

objs/nxs-chat-srv-u-rdmn-attachments.o: ./src/units/rdmn-attachments/rdmn-attachments.c \
				./src/units/rdmn-attachments/rdmn-attachments.h \
				./src/units/rdmn-attachments/rdmn-attachments-typedefs.h \
				./src/units/rdmn-attachments/rdmn-attachments-subunits.h \
				$(PROJ_CORE_HEADERS) \
				$(PROJ_META_HEADERS) \
				$(PROJ_UNITS_SUB_HEADERS) \
				$(PROJ_COLLECTIONS_HEADERS) \
				$(PROJ_DAL_HEADERS) \
				$(NXS_CORE_HEADERS)

				$(CC) -c $(CFLAGS) $(CFLAGS32) $(NXS_CORE_INCLUDES) $(PROJ_INCLUDES) $(NXS_INCLUDES) $(USE_NXS_MODULES) -o objs/nxs-chat-srv-u-rdmn-attachments.o ./src/units/rdmn-attachments/rdmn-attachments.c
