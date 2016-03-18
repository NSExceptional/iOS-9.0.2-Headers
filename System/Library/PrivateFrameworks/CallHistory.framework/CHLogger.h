/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <libobjc.A.dylib/CHLoggerProtocol.h>

@interface CHLogger : NSObject <CHLoggerProtocol> {

	StaticLogger* _logger;

}
+(void)logWithLevel:(unsigned char)arg1 logger:(LoggerBase<std::__1::shared_ptr<ctu::LogServer> >*)arg2 format:(id)arg3 argList:(char*)arg4 ;
-(id)initWithDomain:(id)arg1 ;
-(void)logWithLevel:(unsigned)arg1 withFormat:(id)arg2 withArgs:(char*)arg3 ;
-(BOOL)shouldLogForLevel:(unsigned)arg1 ;
-(void)logWithLevel:(unsigned)arg1 withFormat:(id)arg2 ;
@end

