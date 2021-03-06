#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/ClassA/ClassA.o \
	${OBJECTDIR}/ClassB/ClassB.o \
	${OBJECTDIR}/GoodClass/GoodClass.o \
	${OBJECTDIR}/KeyWords/KeyWords.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptutorial

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptutorial: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptutorial ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/ClassA/ClassA.o: ClassA/ClassA.cpp 
	${MKDIR} -p ${OBJECTDIR}/ClassA
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ClassA/ClassA.o ClassA/ClassA.cpp

${OBJECTDIR}/ClassB/ClassB.o: ClassB/ClassB.cpp 
	${MKDIR} -p ${OBJECTDIR}/ClassB
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ClassB/ClassB.o ClassB/ClassB.cpp

${OBJECTDIR}/GoodClass/GoodClass.o: GoodClass/GoodClass.cpp 
	${MKDIR} -p ${OBJECTDIR}/GoodClass
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GoodClass/GoodClass.o GoodClass/GoodClass.cpp

${OBJECTDIR}/KeyWords/KeyWords.o: KeyWords/KeyWords.cpp 
	${MKDIR} -p ${OBJECTDIR}/KeyWords
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/KeyWords/KeyWords.o KeyWords/KeyWords.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cpptutorial

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
