//
//  H264EncodeTool.h
//  VideoToolBoxDecode
//
//  Created by aaron on 2018/12/1.
//  Copyright © 2018年 aaron. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>


NS_ASSUME_NONNULL_BEGIN
@protocol  H264EncodeCallBackDelegate <NSObject>

//回调sps和pps数据
- (void)gotSpsPps:(NSData*)sps pps:(NSData*)pps;

//回调H264数据和是否是关键帧
- (void)gotEncodedData:(NSData*)data isKeyFrame:(BOOL)isKeyFrame;

@end
@interface H264EncodeTool : NSObject


//初始化视频宽高
- (void) initEncode:(int)width  height:(int)height;

//编码CMSampleBufferRef
- (void) encode:(CMSampleBufferRef )sampleBuffer;

//停止编码
- (void) stopEncode;

@property (weak, nonatomic) id<H264EncodeCallBackDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
