/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface SLGoogleLegacyTokenMigrationResponse : NSObject {

	long long _statusCode;
	NSError* _error;
	NSString* _responseBody;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * responseBody;              //@synthesize responseBody=_responseBody - In the implementation block
-(NSError *)error;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)responseBody;
-(long long)statusCode;
@end

