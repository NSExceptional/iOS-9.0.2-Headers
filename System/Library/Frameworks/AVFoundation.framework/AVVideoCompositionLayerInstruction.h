/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVVideoCompositionLayerInstructionInternal;

@interface AVVideoCompositionLayerInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	AVVideoCompositionLayerInstructionInternal* _layerInstruction;

}

@property (nonatomic,readonly) int trackID; 
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)dictionaryRepresentationWithTimeRange:(SCD_Struct_CM6)arg1 ;
-(void)_setValuesFromDictionary:(id)arg1 timeRange:(SCD_Struct_CM6)arg2 ;
-(void)_setTransformRamps:(id)arg1 ;
-(void)_setOpacityRamps:(id)arg1 ;
-(void)_setCropRectangleRamps:(id)arg1 ;
-(void)_setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_CM6)arg3 selector:(SEL)arg4 ;
-(void)_setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_CM6)arg3 selector:(SEL)arg4 ;
-(void)_setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_CM6)arg3 selector:(SEL)arg4 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_CM5)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_CM5)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_CM5)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_CM6)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_CM6)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_CM6)arg3 ;
-(BOOL)getTransformRampForTime:(SCD_Struct_CM5)arg1 startTransform:(CGAffineTransform*)arg2 endTransform:(CGAffineTransform*)arg3 timeRange:(SCD_Struct_CM6*)arg4 ;
-(BOOL)getOpacityRampForTime:(SCD_Struct_CM5)arg1 startOpacity:(float*)arg2 endOpacity:(float*)arg3 timeRange:(SCD_Struct_CM6*)arg4 ;
-(BOOL)getCropRectangleRampForTime:(SCD_Struct_CM5)arg1 startCropRectangle:(CGRect*)arg2 endCropRectangle:(CGRect*)arg3 timeRange:(SCD_Struct_CM6*)arg4 ;
-(int)trackID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)setTrackID:(int)arg1 ;
@end

