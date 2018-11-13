//
//  AesCipher.h
//  Strongbox
//
//  Created by Mark on 25/10/2018.
//  Copyright © 2018 Mark McGuill. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Cipher.h"

NS_ASSUME_NONNULL_BEGIN

@interface AesCipher : NSObject<Cipher>

- (nullable NSData*)decrypt:(NSData*)data iv:(NSData*)iv key:(NSData*)key;
- (nullable NSData*)encrypt:(NSData*)data iv:(NSData*)iv key:(NSData*)key;
- (nullable NSData*)generateIv;

@end

NS_ASSUME_NONNULL_END