/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock;

@interface _NSXPCConnectionImportInfo : NSObject {

	unsigned long long _generationCount;
	NSLock* _lock;
	CFDictionaryRef _proxyNumberToCount;
	CFSetRef _knownProxies;

}
-(void)addProxy:(id)arg1 ;
-(BOOL)removeProxy:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

