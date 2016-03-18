/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@interface MTLResourceListPool : NSObject {

	MTLResourceListPoolPrivate* _priv;
	int _resourceListCapacity;

}
-(int)availableCount;
-(id)initWithResourceListCapacity:(int)arg1 ;
-(void)dealloc;
-(void)purge;
@end

