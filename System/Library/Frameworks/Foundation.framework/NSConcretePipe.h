/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPipe.h>

@class NSFileHandle;

@interface NSConcretePipe : NSPipe {

	NSFileHandle* _readHandle;
	NSFileHandle* _writeHandle;

}
-(void)_closeOnDealloc;
-(id)fileHandleForReading;
-(id)fileHandleForWriting;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

