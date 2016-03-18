/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFColorBoxes : NSObject {

	CGSize _imageSize;
	/*function pointer*/void** _colorBoxes;
	unsigned long long _rowCount;
	unsigned long long _columnCount;
	unsigned long long _size;
	double _contrast;

}

@property (nonatomic,readonly) /*function pointer*/void** colorBoxes;              //@synthesize colorBoxes=_colorBoxes - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount;                        //@synthesize rowCount=_rowCount - In the implementation block
@property (nonatomic,readonly) unsigned long long columnCount;                     //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double contrast;                                    //@synthesize contrast=_contrast - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
+(id)colorBoxesForImage:(id)arg1 colorBoxSize:(unsigned long long)arg2 ;
-(unsigned long long)size;
-(void)dealloc;
-(id)description;
-(CGSize)imageSize;
-(double)contrast;
-(unsigned long long)columnCount;
-(unsigned long long)rowCount;
-(id)initWithColorBoxes:(/*function pointer*/void**)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 contrast:(double)arg5 imageSize:(CGSize)arg6 ;
-(void)_freeColorBoxes;
-(/*function pointer*/void**)colorBoxes;
@end

