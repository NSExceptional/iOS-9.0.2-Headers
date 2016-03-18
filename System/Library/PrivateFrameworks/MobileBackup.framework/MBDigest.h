/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MBDigest : NSObject
+(id)sha1;
+(id)sha1ForData:(id)arg1 ;
+(id)sha1ForFileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)sha1ForString:(id)arg1 ;
+(id)sha1HmacForString:(id)arg1 key:(id)arg2 ;
+(long long)simpleChecksumForString:(id)arg1 ;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)updateWithData:(id)arg1 ;
-(void)updateWithString:(id)arg1 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)final;
-(BOOL)updateWithFile:(id)arg1 error:(id*)arg2 ;
-(void)updateWithInt64:(long long)arg1 ;
-(void)updateWithInt32:(int)arg1 ;
-(void)updateWithDate:(id)arg1 ;
@end
