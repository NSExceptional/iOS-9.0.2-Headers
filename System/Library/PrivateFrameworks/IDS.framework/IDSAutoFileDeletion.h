/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface IDSAutoFileDeletion : NSObject {

	NSURL* _fileURL;
	long long _accessedCount;

}
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)incrementAccessCount;
@end

