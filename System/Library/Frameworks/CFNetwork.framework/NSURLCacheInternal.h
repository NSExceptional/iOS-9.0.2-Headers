/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString;

@interface NSURLCacheInternal : NSObject {

	unsigned long long memoryCapacity;
	unsigned long long diskCapacity;
	NSString* diskPath;
	unsigned long long currentMemoryUsage;
	unsigned long long currentDiskUsage;
	CFURLCache* _cacheRef;

}
-(void)dealloc;
-(void)finalize;
@end

