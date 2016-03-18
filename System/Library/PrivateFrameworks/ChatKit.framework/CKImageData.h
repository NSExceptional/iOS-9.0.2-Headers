/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSData, NSString, UIImage;

@interface CKImageData : NSObject {

	CGImageSourceRef _imageSource;
	unsigned long long _count;
	long long _orientation;
	CGSize _pxSize;
	BOOL _initializedProperties;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CGSize ptSize; 
@property (nonatomic,readonly) CGSize pxSize; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,retain,readonly) UIImage * image; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)UTITypeForData:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(long long)orientation;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(UIImage *)image;
-(NSString *)MIMEType;
-(void)_initializeProperties;
-(NSString *)UTIType;
-(CGSize)ptSize;
-(id)thumbnailsFillToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
-(id)durationsWithMaxCount:(unsigned long long)arg1 ;
-(CGSize)pxSize;
-(id)thumbnailFillToSize:(CGSize)arg1 ;
-(id)_thumbnailFitToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_thumbnailFillToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)thumbnailFitToSize:(CGSize)arg1 ;
-(id)thumbnailFillToSizeCropping:(CGSize)arg1 ;
-(id)thumbnailsFitToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
@end

