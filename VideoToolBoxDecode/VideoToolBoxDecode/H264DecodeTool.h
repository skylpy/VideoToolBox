//
//  H264DecodeTool.h
//  VideoToolBoxDecode
//
//  Created by aaron on 2018/12/1.
//  Copyright © 2018年 aaron. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <VideoToolbox/VideoToolbox.h>

NS_ASSUME_NONNULL_BEGIN
@protocol  H264DecodeFrameCallbackDelegate <NSObject>

//回调sps和pps数据
- (void)gotDecodedFrame:(CVImageBufferRef )imageBuffer;

@end
@interface H264DecodeTool : NSObject

-(BOOL)initH264Decoder;

//解码nalu
-(void)decodeNalu:(uint8_t *)frame size:(uint32_t)frameSize;

- (void)endDecode;

@property (weak, nonatomic) id<H264DecodeFrameCallbackDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
