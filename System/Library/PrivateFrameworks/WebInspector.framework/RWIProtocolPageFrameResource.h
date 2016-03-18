/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * mimeType; 
@property (assign,nonatomic) BOOL failed; 
@property (assign,nonatomic) BOOL canceled; 
@property (nonatomic,copy) NSString * sourceMapURL; 
-(NSString *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(BOOL)canceled;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3 ;
@end
