add_triton_library(FlagTreeTransforms
  DSLInline.cpp

  DEPENDS
  TritonIR
  TritonGPUIR
  GluonIR
  FlagTreeIR
  FlagTreeTransformsIncGen
)