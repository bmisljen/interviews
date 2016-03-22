##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=projects
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/stanko/Downloads/projects
ProjectPath            :=C:/Users/stanko/Downloads/projects
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=stanko
Date                   :=22/03/2016
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="projects.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -Wall $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/BinaryTree.cpp$(ObjectSuffix) $(IntermediateDirectory)/doublelinkedlist.cpp$(ObjectSuffix) $(IntermediateDirectory)/fibinacci.cpp$(ObjectSuffix) $(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IntermediateDirectory)/numberoperations.cpp$(ObjectSuffix) $(IntermediateDirectory)/sort.cpp$(ObjectSuffix) $(IntermediateDirectory)/stringoperations.cpp$(ObjectSuffix) $(IntermediateDirectory)/testsMain.cpp$(ObjectSuffix) $(IntermediateDirectory)/Objects.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/BinaryTree.cpp$(ObjectSuffix): BinaryTree.cpp $(IntermediateDirectory)/BinaryTree.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/BinaryTree.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BinaryTree.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BinaryTree.cpp$(DependSuffix): BinaryTree.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BinaryTree.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/BinaryTree.cpp$(DependSuffix) -MM "BinaryTree.cpp"

$(IntermediateDirectory)/BinaryTree.cpp$(PreprocessSuffix): BinaryTree.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BinaryTree.cpp$(PreprocessSuffix) "BinaryTree.cpp"

$(IntermediateDirectory)/doublelinkedlist.cpp$(ObjectSuffix): doublelinkedlist.cpp $(IntermediateDirectory)/doublelinkedlist.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/doublelinkedlist.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/doublelinkedlist.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/doublelinkedlist.cpp$(DependSuffix): doublelinkedlist.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/doublelinkedlist.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/doublelinkedlist.cpp$(DependSuffix) -MM "doublelinkedlist.cpp"

$(IntermediateDirectory)/doublelinkedlist.cpp$(PreprocessSuffix): doublelinkedlist.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/doublelinkedlist.cpp$(PreprocessSuffix) "doublelinkedlist.cpp"

$(IntermediateDirectory)/fibinacci.cpp$(ObjectSuffix): fibinacci.cpp $(IntermediateDirectory)/fibinacci.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/fibinacci.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/fibinacci.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/fibinacci.cpp$(DependSuffix): fibinacci.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/fibinacci.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/fibinacci.cpp$(DependSuffix) -MM "fibinacci.cpp"

$(IntermediateDirectory)/fibinacci.cpp$(PreprocessSuffix): fibinacci.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/fibinacci.cpp$(PreprocessSuffix) "fibinacci.cpp"

$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix): LinkedList.cpp $(IntermediateDirectory)/LinkedList.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/LinkedList.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix): LinkedList.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LinkedList.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LinkedList.cpp$(DependSuffix) -MM "LinkedList.cpp"

$(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix): LinkedList.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LinkedList.cpp$(PreprocessSuffix) "LinkedList.cpp"

$(IntermediateDirectory)/numberoperations.cpp$(ObjectSuffix): numberoperations.cpp $(IntermediateDirectory)/numberoperations.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/numberoperations.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/numberoperations.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/numberoperations.cpp$(DependSuffix): numberoperations.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/numberoperations.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/numberoperations.cpp$(DependSuffix) -MM "numberoperations.cpp"

$(IntermediateDirectory)/numberoperations.cpp$(PreprocessSuffix): numberoperations.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/numberoperations.cpp$(PreprocessSuffix) "numberoperations.cpp"

$(IntermediateDirectory)/sort.cpp$(ObjectSuffix): sort.cpp $(IntermediateDirectory)/sort.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/sort.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sort.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sort.cpp$(DependSuffix): sort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/sort.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/sort.cpp$(DependSuffix) -MM "sort.cpp"

$(IntermediateDirectory)/sort.cpp$(PreprocessSuffix): sort.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sort.cpp$(PreprocessSuffix) "sort.cpp"

$(IntermediateDirectory)/stringoperations.cpp$(ObjectSuffix): stringoperations.cpp $(IntermediateDirectory)/stringoperations.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/stringoperations.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/stringoperations.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/stringoperations.cpp$(DependSuffix): stringoperations.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/stringoperations.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/stringoperations.cpp$(DependSuffix) -MM "stringoperations.cpp"

$(IntermediateDirectory)/stringoperations.cpp$(PreprocessSuffix): stringoperations.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/stringoperations.cpp$(PreprocessSuffix) "stringoperations.cpp"

$(IntermediateDirectory)/testsMain.cpp$(ObjectSuffix): testsMain.cpp $(IntermediateDirectory)/testsMain.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/testsMain.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/testsMain.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/testsMain.cpp$(DependSuffix): testsMain.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/testsMain.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/testsMain.cpp$(DependSuffix) -MM "testsMain.cpp"

$(IntermediateDirectory)/testsMain.cpp$(PreprocessSuffix): testsMain.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/testsMain.cpp$(PreprocessSuffix) "testsMain.cpp"

$(IntermediateDirectory)/Objects.cpp$(ObjectSuffix): Objects.cpp $(IntermediateDirectory)/Objects.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/stanko/Downloads/projects/Objects.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Objects.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Objects.cpp$(DependSuffix): Objects.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Objects.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Objects.cpp$(DependSuffix) -MM "Objects.cpp"

$(IntermediateDirectory)/Objects.cpp$(PreprocessSuffix): Objects.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Objects.cpp$(PreprocessSuffix) "Objects.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


