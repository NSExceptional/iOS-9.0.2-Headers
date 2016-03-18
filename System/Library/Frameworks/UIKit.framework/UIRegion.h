/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PKRegion, UIBezierPath;

@interface UIRegion : NSObject <NSCopying, NSCoding> {

	PKRegion* _region;

}

@property (nonatomic,readonly) UIBezierPath * path; 
@property (nonatomic,readonly) PKRegion * _region; 
+(id)infiniteRegion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIBezierPath *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(id)initWithRadius:(double)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)inverseRegion;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(PKRegion *)_region;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
@end

