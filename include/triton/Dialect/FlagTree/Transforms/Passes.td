#ifndef FLAGTREE_PASSES
#define FLAGTREE_PASSES

include "mlir/Pass/PassBase.td"

def FlagTreeDSLInline : Pass<"flagtree-dslinline", "mlir::ModuleOp"> {}

#endif
