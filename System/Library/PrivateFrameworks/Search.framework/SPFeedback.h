/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SPFeedback : NSObject <NSSecureCoding> {

	unsigned _domain;
	double _timestamp;
	NSString* _identifier;
	NSString* _bundleID;
	NSString* _externalIdentifier;
	NSString* _protectionClass;
	NSString* _input;
	NSArray* _results;
	NSString* _fbq;
	NSString* _web_fbq;
	NSString* _predictionIdentifier;
	NSString* _keyboardLanguage;

}

@property (assign,nonatomic) unsigned domain;                            //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,retain) NSString * protectionClass;                 //@synthesize protectionClass=_protectionClass - In the implementation block
@property (nonatomic,retain) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) NSArray * results;                          //@synthesize results=_results - In the implementation block
@property (nonatomic,copy) NSString * fbq;                               //@synthesize fbq=_fbq - In the implementation block
@property (nonatomic,copy) NSString * web_fbq;                           //@synthesize web_fbq=_web_fbq - In the implementation block
@property (nonatomic,copy) NSString * predictionIdentifier;              //@synthesize predictionIdentifier=_predictionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * keyboardLanguage;                //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)feedback;
+(id)feedbackForSearchResult:(id)arg1 section:(id)arg2 ;
-(id)sha1:(id)arg1 ;
-(id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2 ;
-(id)parsecFeedbackFromSession:(id)arg1 ;
-(id)serializedActivityInfoWithResult:(id)arg1 attributes:(id)arg2 ;
-(id)localResultActivityStringFromResult:(id)arg1 attributes:(id)arg2 ;
-(void)setInput:(NSString *)arg1 ;
-(void)setProtectionClass:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setDomain:(unsigned)arg1 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(double)timestamp;
-(NSString *)identifier;
-(NSString *)input;
-(unsigned)domain;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(NSString *)externalIdentifier;
-(NSString *)protectionClass;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(void)setPredictionIdentifier:(NSString *)arg1 ;
-(NSString *)fbq;
-(void)setFbq:(NSString *)arg1 ;
-(NSString *)web_fbq;
-(void)setWeb_fbq:(NSString *)arg1 ;
-(NSString *)predictionIdentifier;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
@end

