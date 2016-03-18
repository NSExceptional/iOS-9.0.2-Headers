/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying> {

	NSSet* _statusCodes;

}

@property (copy) NSSet * statusCodes;              //@synthesize statusCodes=_statusCodes - In the implementation block
+(id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2 ;
-(void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithStatusCodes:(id)arg1 ;
-(void)setStatusCodes:(NSSet *)arg1 ;
-(NSSet *)statusCodes;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

