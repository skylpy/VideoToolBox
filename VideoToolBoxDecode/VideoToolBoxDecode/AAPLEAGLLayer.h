//
//  AAPLEAGLLayer.h
//  VideoToolBoxDecode
//
//  Created by aaron on 2018/12/1.
//  Copyright © 2018年 aaron. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface AAPLEAGLLayer : CAEAGLLayer

@property CVPixelBufferRef pixelBuffer;
- (id)initWithFrame:(CGRect)frame;
- (void)resetRenderBuffer;

@end

NS_ASSUME_NONNULL_END
