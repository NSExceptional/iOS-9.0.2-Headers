/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSError;


@protocol ACMAuthenticationResponse <NSObject>
@property (retain) NSString * token; 
@property (retain) NSError * error; 
@property (retain) NSString * userName; 
@required
-(NSString *)userName;
-(NSError *)error;
-(NSString *)token;
-(void)setToken:(id)arg1;
-(void)setError:(id)arg1;
-(void)setUserName:(id)arg1;

@end

