/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {

	BOOL _includeContacts;
	BOOL _includeRecents;
	BOOL _includeSuggestions;
	BOOL _includeDirectoryServers;
	BOOL _includeCalendarServers;
	BOOL _includeSupplementalResults;
	BOOL _includePredictions;

}

@property (assign) BOOL includeContacts;                            //@synthesize includeContacts=_includeContacts - In the implementation block
@property (assign) BOOL includeRecents;                             //@synthesize includeRecents=_includeRecents - In the implementation block
@property (assign) BOOL includeSuggestions;                         //@synthesize includeSuggestions=_includeSuggestions - In the implementation block
@property (assign) BOOL includeDirectoryServers;                    //@synthesize includeDirectoryServers=_includeDirectoryServers - In the implementation block
@property (assign) BOOL includeCalendarServers;                     //@synthesize includeCalendarServers=_includeCalendarServers - In the implementation block
@property (assign) BOOL includeSupplementalResults;                 //@synthesize includeSupplementalResults=_includeSupplementalResults - In the implementation block
@property (assign) BOOL includePredictions;                         //@synthesize includePredictions=_includePredictions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIncludeContacts:(BOOL)arg1 ;
-(void)setIncludeRecents:(BOOL)arg1 ;
-(void)setIncludeSuggestions:(BOOL)arg1 ;
-(void)setIncludeDirectoryServers:(BOOL)arg1 ;
-(BOOL)includeContacts;
-(BOOL)includeRecents;
-(BOOL)includeSuggestions;
-(void)setIncludeCalendarServers:(BOOL)arg1 ;
-(void)setIncludePredictions:(BOOL)arg1 ;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
-(void)setIncludeSupplementalResults:(BOOL)arg1 ;
@end

