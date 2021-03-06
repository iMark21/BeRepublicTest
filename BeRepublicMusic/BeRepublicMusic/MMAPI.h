//
//  MMAPI.h
//  BeRepublicMusic
//
//  Created by Juan Miguel Marqués Morilla on 22/1/16.
//  Copyright © 2016 Juan Miguel Marqués Morilla. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import <ReactiveCocoa/RACEXTScope.h>

@interface MMAPI : NSObject

+(instancetype)sharedInstance;

- (void)queryWithString:(NSString *) searchString completionBlock:(void (^)(NSArray *JSONArray, NSError *error)) block ;

- (RACSignal *)signalForSearchWithText:(NSString *)text;



@end
