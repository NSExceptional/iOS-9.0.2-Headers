/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVDateRangeMetadataGroupInternal, NSDate, NSArray;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVDateRangeMetadataGroupInternal* _priv;

}

@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSArray * items; 
@property (getter=_dateRangeMetadataGroupInternal,nonatomic,readonly) AVDateRangeMetadataGroupInternal * dateRangeMetadataGroupInternal; 
-(id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_dateRangeMetadataGroupInternal;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end

